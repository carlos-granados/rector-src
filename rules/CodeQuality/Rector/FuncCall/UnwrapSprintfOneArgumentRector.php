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
 * @see \Rector\Tests\CodeQuality\Rector\FuncCall\UnwrapSprintfOneArgumentRector\UnwrapSprintfOneArgumentRectorTest
 */
final class UnwrapSprintfOneArgumentRector extends AbstractRector
{
    public function __construct(
        private readonly ArgsAnalyzer $argsAnalyzer
    ) {
    }

    public function getRuleDefinition(): RuleDefinition
    {
        return new RuleDefinition('Unwrap `sprintf()` with one argument', [
            new CodeSample(
                <<<'CODE_SAMPLE'
echo sprintf('value');
CODE_SAMPLE
                ,
                <<<'CODE_SAMPLE'
echo 'value';
CODE_SAMPLE
            ),
        ]);
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
        if ($node->isFirstClassCallable()) {
            return null;
        }

        if (! $this->isName($node, 'sprintf')) {
            return null;
        }

        $args = $node->getArgs();

        // Check for named arguments
        if ($this->argsAnalyzer->hasNamedArg($args)) {
            return null;
        }

        // Need exactly 1 argument
        if (count($args) !== 1) {
            return null;
        }

        $firstArg = $args[0];

        // Type safety: must be Arg instance
        if (! $firstArg instanceof Arg) {
            return null;
        }

        if ($firstArg->unpack) {
            return null;
        }

        return $firstArg->value;
    }
}
