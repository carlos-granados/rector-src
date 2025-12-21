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
 * @see \Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyInArrayValuesRector\SimplifyInArrayValuesRectorTest
 */
final class SimplifyInArrayValuesRector extends AbstractRector
{
    public function __construct(
        private readonly ArgsAnalyzer $argsAnalyzer
    ) {
    }

    public function getRuleDefinition(): RuleDefinition
    {
        return new RuleDefinition(
            'Removes unneeded array_values() in in_array() call',
            [new CodeSample('in_array("key", array_values($array), true);', 'in_array("key", $array, true);')]
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
        if (! $this->isName($node, 'in_array')) {
            return null;
        }

        if ($node->isFirstClassCallable()) {
            return null;
        }

        $args = $node->getArgs();

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

        if (! isset($node->args[1])) {
            return null;
        }

        if (! $node->args[1] instanceof Arg) {
            return null;
        }

        if (! $node->args[1]->value instanceof FuncCall) {
            return null;
        }

        /** @var FuncCall $innerFunCall */
        $innerFunCall = $node->args[1]->value;
        if (! $this->isName($innerFunCall, 'array_values')) {
            return null;
        }

        $innerArgs = $innerFunCall->getArgs();

        if ($innerArgs === []) {
            return null;
        }

        if ($this->argsAnalyzer->hasNamedArg($innerArgs)) {
            return null;
        }

        foreach ($innerArgs as $innerArg) {
            if (! $innerArg instanceof Arg) {
                return null;
            }

            if ($innerArg->unpack) {
                return null;
            }
        }

        $node->args[1] = $innerArgs[0];

        return $node;
    }
}
