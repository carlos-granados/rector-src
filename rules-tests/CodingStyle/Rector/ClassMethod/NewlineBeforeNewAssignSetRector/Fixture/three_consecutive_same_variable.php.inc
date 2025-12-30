<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\NewlineBeforeNewAssignSetRector\Fixture;

final class ThreeConsecutiveSameVariable
{
    public function run()
    {
        $value = new Value;
        $value->setValue(5);
        $value->setName('test');
        $value2 = new Value;
        $value2->setValue(1);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\NewlineBeforeNewAssignSetRector\Fixture;

final class ThreeConsecutiveSameVariable
{
    public function run()
    {
        $value = new Value;
        $value->setValue(5);
        $value->setName('test');

        $value2 = new Value;
        $value2->setValue(1);
    }
}

?>
