<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\NewlineBeforeNewAssignSetRector\Fixture;

final class ClosureScope
{
    public function run()
    {
        $closure = function () {
            $value = new Value;
            $value->setValue(5);
            $value2 = new Value;
            $value2->setValue(1);
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\NewlineBeforeNewAssignSetRector\Fixture;

final class ClosureScope
{
    public function run()
    {
        $closure = function () {
            $value = new Value;
            $value->setValue(5);

            $value2 = new Value;
            $value2->setValue(1);
        };
    }
}

?>
