<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\NewlineBeforeNewAssignSetRector\Fixture;

final class NestedPropertyFetch
{
    public function run()
    {
        $value = new Value;
        $value->child->prop = 5;
        $value2 = new Value;
        $value2->child->prop = 1;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\NewlineBeforeNewAssignSetRector\Fixture;

final class NestedPropertyFetch
{
    public function run()
    {
        $value = new Value;
        $value->child->prop = 5;

        $value2 = new Value;
        $value2->child->prop = 1;
    }
}

?>
