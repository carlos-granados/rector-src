<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class InstanceofCheck
{
    public function go($condition, $object)
    {
        return $condition ? $object instanceof \stdClass : false;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class InstanceofCheck
{
    public function go($condition, $object)
    {
        return $condition && $object instanceof \stdClass;
    }
}

?>
