<?php

namespace Rector\Tests\CodeQuality\Rector\Assign\CombinedAssignRector\Fixture;

class NestedPropertyAccess
{
    public function run()
    {
        $obj = new \stdClass();
        $obj->value = 5;
        $obj->value = $obj->value + 10;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Assign\CombinedAssignRector\Fixture;

class NestedPropertyAccess
{
    public function run()
    {
        $obj = new \stdClass();
        $obj->value = 5;
        $obj->value += 10;
    }
}

?>
