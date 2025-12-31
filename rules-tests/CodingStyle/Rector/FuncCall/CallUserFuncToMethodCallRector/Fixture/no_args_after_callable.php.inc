<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CallUserFuncToMethodCallRector\Fixture;

final class SkipNoArgs
{
    private \stdClass $property;

    public function run()
    {
        // No args after callable - should still transform
        $result = call_user_func([$this->property, 'method']);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CallUserFuncToMethodCallRector\Fixture;

final class SkipNoArgs
{
    private \stdClass $property;

    public function run()
    {
        // No args after callable - should still transform
        $result = $this->property->method();
    }
}

?>
