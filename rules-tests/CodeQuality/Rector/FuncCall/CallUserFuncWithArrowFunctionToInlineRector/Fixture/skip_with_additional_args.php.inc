<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CallUserFuncWithArrowFunctionToInlineRector\Fixture;

final class SkipWithAdditionalArgs
{
    public function run()
    {
        $result = \call_user_func(fn ($x) => $x * 2, 50);
    }
}
