<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CallUserFuncWithArrowFunctionToInlineRector\Fixture;

final class SkipClosureWithParam
{
    public function run()
    {
        // Closure with parameter should not be inlined when called without args
        $result = \call_user_func(function ($x) {
            return $x * 2;
        });
    }
}
