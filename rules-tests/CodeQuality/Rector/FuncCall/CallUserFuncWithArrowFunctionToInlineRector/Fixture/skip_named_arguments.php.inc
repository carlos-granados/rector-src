<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CallUserFuncWithArrowFunctionToInlineRector\Fixture;

final class SkipNamedArguments
{
    public function run()
    {
        $result = \call_user_func(callback: fn () => 100);
    }
}
