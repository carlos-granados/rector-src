<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CallUserFuncWithArrowFunctionToInlineRector\Fixture;

final class SkipArrowFunctionWithParam
{
    public function run()
    {
        // Arrow function with parameter should not be inlined when called without args
        $result = \call_user_func(fn ($x) => $x * 2);
    }
}
