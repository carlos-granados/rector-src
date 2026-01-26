<?php

declare(strict_types=1);

namespace Rector\CodeQuality\Rector\Include_;

use Nette\Utils\Strings;
use PhpParser\Node;
use PhpParser\Node\Expr\BinaryOp\Concat;
use PhpParser\Node\Expr\Include_;
use PhpParser\Node\Scalar\MagicConst\Dir;
use PhpParser\Node\Scalar\String_;
use Rector\PhpParser\Node\Value\ValueResolver;
use Rector\Rector\AbstractRector;
use Rector\Util\StringUtils;
use Symplify\RuleDocGenerator\ValueObject\CodeSample\CodeSample;
use Symplify\RuleDocGenerator\ValueObject\RuleDefinition;

/**
 * @see \Rector\Tests\CodeQuality\Rector\Include_\AbsolutizeRequireAndIncludePathRector\AbsolutizeRequireAndIncludePathRectorTest
 */
final class AbsolutizeRequireAndIncludePathRector extends AbstractRector
{
    /**
     * @see https://regex101.com/r/N8oLqv/1
     */
    private const string WINDOWS_DRIVE_REGEX = '#^[a-zA-z]\:[\/\\\]#';

    public function __construct(
        private readonly ValueResolver $valueResolver
    ) {
    }

    public function getRuleDefinition(): RuleDefinition
    {
        return new RuleDefinition(
            'Migrate include/require to absolute path. This Rector might introduce backwards incompatible code, when the include/require being changed depends on the current working directory.',
            [
                new CodeSample(
                    <<<'CODE_SAMPLE'
class SomeClass
{
    public function run()
    {
        require 'autoload.php';

        require $variable;
    }
}
CODE_SAMPLE
                    ,
                    <<<'CODE_SAMPLE'
class SomeClass
{
    public function run()
    {
        require __DIR__ . '/autoload.php';

        require $variable;
    }
}
CODE_SAMPLE
                ),
            ]
        );
    }

    /**
     * @return array<class-string<Node>>
     */
    public function getNodeTypes(): array
    {
        return [Include_::class];
    }

    /**
     * @param Include_ $node
     */
    public function refactor(Node $node): ?Node
    {
        if ($node->expr instanceof Concat) {
            $leftmostString = $this->findLeftmostString($node->expr);
            if ($leftmostString instanceof String_ && $this->isRefactorableStringPath($leftmostString)) {
                // Replace the leftmost string with __DIR__ prefixed version
                $this->replaceLeftmostString($node->expr, $this->prefixWithDirConstant($leftmostString));
                return $node;
            }
        }

        if (! $node->expr instanceof String_) {
            return null;
        }

        if (! $this->isRefactorableStringPath($node->expr)) {
            return null;
        }

        $includeValue = $this->valueResolver->getValue($node->expr);

        // ensure value is a string
        if (! is_string($includeValue)) {
            return null;
        }

        // skip phar
        if (\str_starts_with($includeValue, 'phar://')) {
            return null;
        }

        // skip absolute paths
        if (\str_starts_with($includeValue, '/') || \str_starts_with($includeValue, '\\')) {
            return null;
        }

        if (str_contains($includeValue, 'config/')) {
            return null;
        }

        if (StringUtils::isMatch($includeValue, self::WINDOWS_DRIVE_REGEX)) {
            return null;
        }

        // add preslash to string
        $node->expr->value = \str_starts_with($includeValue, './') ? Strings::substring(
            $includeValue,
            1
        ) : '/' . $includeValue;

        $node->expr = $this->prefixWithDirConstant($node->expr);

        return $node;
    }

    private function isRefactorableStringPath(String_ $string): bool
    {
        return ! \str_starts_with($string->value, 'phar://');
    }

    private function prefixWithDirConstant(String_ $string): Concat
    {
        $this->removeExtraDotSlash($string);
        $this->prependSlashIfMissing($string);

        return new Concat(new Dir(), $string);
    }

    /**
     * Remove "./" which would break the path
     */
    private function removeExtraDotSlash(String_ $string): void
    {
        if (! \str_starts_with($string->value, './')) {
            return;
        }

        $string->value = Strings::replace($string->value, '#^\.\/#', '/');
    }

    private function prependSlashIfMissing(String_ $string): void
    {
        if (\str_starts_with($string->value, '/')) {
            return;
        }

        $string->value = '/' . $string->value;
    }

    /**
     * Find the leftmost String_ node in a Concat expression tree
     */
    private function findLeftmostString(Concat $concat): Node
    {
        $current = $concat;
        while ($current->left instanceof Concat) {
            $current = $current->left;
        }

        return $current->left;
    }

    /**
     * Replace the leftmost node in a Concat expression tree
     */
    private function replaceLeftmostString(Concat $concat, Concat $replacement): void
    {
        $current = $concat;
        while ($current->left instanceof Concat) {
            $current = $current->left;
        }

        $current->left = $replacement;
    }
}
