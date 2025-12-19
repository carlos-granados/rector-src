<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CallUserFuncWithArrowFunctionToInlineRector\Fixture;

final class SkipVariableCallback
{
    public function run()
    {
        $callback = fn () => 100;
        $result = \call_user_func($callback);
    }
}
