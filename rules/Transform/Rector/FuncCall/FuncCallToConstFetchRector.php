<?php

declare(strict_types=1);

namespace Rector\Transform\Rector\FuncCall;

use PhpParser\Node;
use PhpParser\Node\Expr\ConstFetch;
use PhpParser\Node\Expr\FuncCall;
use PhpParser\Node\Name;
use Rector\Contract\Rector\ConfigurableRectorInterface;
use Rector\Rector\AbstractRector;
use Symplify\RuleDocGenerator\ValueObject\CodeSample\ConfiguredCodeSample;
use Symplify\RuleDocGenerator\ValueObject\RuleDefinition;
use Webmozart\Assert\Assert;

/**
 * @see \Rector\Tests\Transform\Rector\FuncCall\FuncCallToConstFetchRector\FunctionCallToConstantRectorTest
 */
final class FuncCallToConstFetchRector extends AbstractRector implements ConfigurableRectorInterface
{
    /**
     * @var array<string, string>
     */
    private array $functionsToConstants = [];

    public function getRuleDefinition(): RuleDefinition
    {
        return new RuleDefinition('Changes use of function calls to use constants', [
            new ConfiguredCodeSample(
                <<<'CODE_SAMPLE'
class SomeClass
{
    public function run()
    {
        $value = php_sapi_name();
    }
}
CODE_SAMPLE
                ,
                <<<'CODE_SAMPLE'
class SomeClass
{
    public function run()
    {
        $value = PHP_SAPI;
    }
}
CODE_SAMPLE
                ,
                [
                    'php_sapi_name' => 'PHP_SAPI',
                ]
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
        $functionName = $this->getName($node);
        if (! is_string($functionName)) {
            return null;
        }

        $lowercaseFunctionName = strtolower($functionName);
        if (! array_key_exists($lowercaseFunctionName, $this->functionsToConstants)) {
            return null;
        }

        return new ConstFetch(new Name($this->functionsToConstants[$lowercaseFunctionName]));
    }

    /**
     * @param mixed[] $configuration
     */
    public function configure(array $configuration): void
    {
        Assert::allString($configuration);
        Assert::allString(array_keys($configuration));

        // Store with lowercase keys for case-insensitive lookup
        foreach ($configuration as $functionName => $constantName) {
            $this->functionsToConstants[strtolower($functionName)] = $constantName;
        }
    }
}
