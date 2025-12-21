<?php

declare(strict_types=1);

namespace Rector\CodeQuality\Rector\FuncCall;

use PhpParser\Node;
use PhpParser\Node\Arg;
use PhpParser\Node\Expr\FuncCall;
use Rector\NodeAnalyzer\ArgsAnalyzer;
use Rector\Rector\AbstractRector;
use Symplify\RuleDocGenerator\ValueObject\CodeSample\CodeSample;
use Symplify\RuleDocGenerator\ValueObject\RuleDefinition;

/**
 * @see \Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyFuncGetArgsCountRector\SimplifyFuncGetArgsCountRectorTest
 */
final class SimplifyFuncGetArgsCountRector extends AbstractRector
{
    public function __construct(
        private readonly ArgsAnalyzer $argsAnalyzer
    ) {
    }

    public function getRuleDefinition(): RuleDefinition
    {
        return new RuleDefinition(
            'Simplify count of func_get_args() to func_num_args()',
            [new CodeSample('count(func_get_args());', 'func_num_args();')]
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
        if (! $this->isName($node, 'count')) {
            return null;
        }

        if ($node->isFirstClassCallable()) {
            return null;
        }

        $args = $node->getArgs();

        if ($args === []) {
            return null;
        }

        if (count($args) > 1) {
            return null;
        }

        if ($this->argsAnalyzer->hasNamedArg($args)) {
            return null;
        }

        foreach ($args as $arg) {
            if (! $arg instanceof Arg) {
                return null;
            }

            if ($arg->unpack) {
                return null;
            }
        }

        $firstArg = $args[0];

        if (! $firstArg->value instanceof FuncCall) {
            return null;
        }

        /** @var FuncCall $innerFuncCall */
        $innerFuncCall = $firstArg->value;

        if (! $this->isName($innerFuncCall, 'func_get_args')) {
            return null;
        }

        return $this->nodeFactory->createFuncCall('func_num_args');
    }
}
