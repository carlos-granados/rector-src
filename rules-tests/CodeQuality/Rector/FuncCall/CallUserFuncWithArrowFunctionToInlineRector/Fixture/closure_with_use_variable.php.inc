<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CallUserFuncWithArrowFunctionToInlineRector\Fixture;

final class ClosureWithUseVariable
{
    public function run()
    {
        $value = 100;
        $result = \call_user_func(function () use ($value) {
            return $value;
        });
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CallUserFuncWithArrowFunctionToInlineRector\Fixture;

final class ClosureWithUseVariable
{
    public function run()
    {
        $value = 100;
        $result = $value;
    }
}

?>
