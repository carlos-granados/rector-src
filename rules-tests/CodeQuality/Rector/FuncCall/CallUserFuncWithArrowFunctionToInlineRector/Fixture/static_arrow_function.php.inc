<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CallUserFuncWithArrowFunctionToInlineRector\Fixture;

final class StaticArrowFunction
{
    public function run()
    {
        $result = \call_user_func(static fn () => 100);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CallUserFuncWithArrowFunctionToInlineRector\Fixture;

final class StaticArrowFunction
{
    public function run()
    {
        $result = 100;
    }
}

?>
