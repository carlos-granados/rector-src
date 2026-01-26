<?php

declare(strict_types=1);

namespace Rector\Php73\Rector\FuncCall;

use PhpParser\Node;
use PhpParser\Node\Arg;
use PhpParser\Node\Expr\FuncCall;
use Rector\Rector\AbstractRector;
use Rector\ValueObject\PhpVersionFeature;
use Rector\VersionBonding\Contract\MinPhpVersionInterface;
use Symplify\RuleDocGenerator\ValueObject\CodeSample\CodeSample;
use Symplify\RuleDocGenerator\ValueObject\RuleDefinition;

/**
 * @see \Rector\Tests\Php73\Rector\FuncCall\SensitiveDefineRector\SensitiveDefineRectorTest
 */
final class SensitiveDefineRector extends AbstractRector implements MinPhpVersionInterface
{
    public function provideMinPhpVersion(): int
    {
        return PhpVersionFeature::DEPRECATE_INSENSITIVE_CONSTANT_DEFINE;
    }

    public function getRuleDefinition(): RuleDefinition
    {
        return new RuleDefinition(
            'Change case insensitive constant definition to sensitive one',
            [new CodeSample(
                <<<'CODE_SAMPLE'
define('FOO', 42, true);
CODE_SAMPLE
                ,
                <<<'CODE_SAMPLE'
define('FOO', 42);
CODE_SAMPLE
            )]
        );
    }

    /**
     * @return array<class-string<Node>>
     */
    public function getNodeTypes(): array
    {
        return [FuncCall::class];
    }

    /**
     * @param FuncCall $node
     */
    public function refactor(Node $node): ?Node
    {
        if (! $this->isName($node, 'define')) {
            return null;
        }

        // handle named argument case_insensitive
        foreach ($node->args as $key => $arg) {
            if (! $arg instanceof Arg) {
                continue;
            }

            if ($arg->name !== null && $this->isName($arg->name, 'case_insensitive')) {
                unset($node->args[$key]);
                return $node;
            }
        }

        // positional argument at index 2
        if (! isset($node->args[2]) || ($node->args[2] instanceof Arg && $node->args[2]->name !== null)) {
            return null;
        }

        unset($node->args[2]);

        return $node;
    }
}
