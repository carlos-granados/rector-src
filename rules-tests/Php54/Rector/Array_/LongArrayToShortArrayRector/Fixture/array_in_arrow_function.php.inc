<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayInArrowFunction
{
    public function run()
    {
        $fn = fn() => array(1, 2, 3);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayInArrowFunction
{
    public function run()
    {
        $fn = fn() => [1, 2, 3];
    }
}

?>
