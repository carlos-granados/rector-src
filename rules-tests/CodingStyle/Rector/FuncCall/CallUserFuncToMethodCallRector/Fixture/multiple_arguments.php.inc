<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CallUserFuncToMethodCallRector\Fixture;

final class MultipleArguments
{
    private \stdClass $property;

    public function run()
    {
        $result = call_user_func([$this->property, 'method'], $arg1, $arg2, $arg3);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CallUserFuncToMethodCallRector\Fixture;

final class MultipleArguments
{
    private \stdClass $property;

    public function run()
    {
        $result = $this->property->method($arg1, $arg2, $arg3);
    }
}

?>
