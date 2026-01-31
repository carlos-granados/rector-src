<?php

declare(strict_types=1);

namespace Rector\Transform\Rector\ClassMethod;

use PhpParser\Node;
use PhpParser\Node\ArrayItem;
use PhpParser\Node\Expr;
use PhpParser\Node\Expr\Array_;
use PhpParser\Node\Expr\ArrowFunction;
use PhpParser\Node\Expr\Closure;
use PhpParser\Node\Stmt\Class_;
use PhpParser\Node\Stmt\ClassMethod;
use PhpParser\Node\Stmt\Return_;
use PhpParser\NodeVisitor;
use Rector\Contract\Rector\ConfigurableRectorInterface;
use Rector\Rector\AbstractRector;
use Rector\Transform\ValueObject\WrapReturn;
use Symplify\RuleDocGenerator\ValueObject\CodeSample\ConfiguredCodeSample;
use Symplify\RuleDocGenerator\ValueObject\RuleDefinition;
use Webmozart\Assert\Assert;

/**
 * @see \Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\WrapReturnRectorTest
 */
final class WrapReturnRector extends AbstractRector implements ConfigurableRectorInterface
{
    /**
     * @var WrapReturn[]
     */
    private array $typeMethodWraps = [];

    public function getRuleDefinition(): RuleDefinition
    {
        return new RuleDefinition('Wrap return value of specific method', [
            new ConfiguredCodeSample(
                <<<'CODE_SAMPLE'
final class SomeClass
{
    public function getItem()
    {
        return 1;
    }
}
CODE_SAMPLE
                ,
                <<<'CODE_SAMPLE'
final class SomeClass
{
    public function getItem()
    {
        return [1];
    }
}
CODE_SAMPLE
                ,
                [new WrapReturn('SomeClass', 'getItem', true)]
            ),
        ]);
    }

    /**
     * @return array<class-string<Node>>
     */
    public function getNodeTypes(): array
    {
        return [Class_::class];
    }

    /**
     * @param Class_ $node
     */
    public function refactor(Node $node): ?Node
    {
        $hasChanged = false;

        foreach ($this->typeMethodWraps as $typeMethodWrap) {
            if (! $this->isObjectType($node, $typeMethodWrap->getObjectType())) {
                continue;
            }

            foreach ($node->getMethods() as $classMethod) {
                if (! $this->isName($classMethod, $typeMethodWrap->getMethod())) {
                    continue;
                }

                if ($node->stmts === null) {
                    continue;
                }

                if ($typeMethodWrap->isArrayWrap() && $this->wrap($classMethod)) {
                    $hasChanged = true;
                }
            }
        }

        if ($hasChanged) {
            return $node;
        }

        return null;
    }

    /**
     * @param mixed[] $configuration
     */
    public function configure(array $configuration): void
    {
        Assert::allIsAOf($configuration, WrapReturn::class);
        $this->typeMethodWraps = $configuration;
    }

    private function wrap(ClassMethod $classMethod): bool
    {
        if (! is_iterable($classMethod->stmts)) {
            return false;
        }

        $hasChanged = false;

        $this->traverseNodesWithCallable($classMethod->stmts, function (Node $node) use (&$hasChanged): ?int {
            // Skip closures and arrow functions - their returns are not part of this method
            if ($node instanceof Closure || $node instanceof ArrowFunction) {
                return NodeVisitor::DONT_TRAVERSE_CURRENT_AND_CHILDREN;
            }

            if ($node instanceof Return_ && $node->expr instanceof Expr && ! $node->expr instanceof Array_) {
                $node->expr = new Array_([new ArrayItem($node->expr)]);
                $hasChanged = true;
            }

            return null;
        });

        return $hasChanged;
    }
}
