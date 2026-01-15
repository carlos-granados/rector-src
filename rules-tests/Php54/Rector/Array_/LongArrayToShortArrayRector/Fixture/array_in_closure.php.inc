<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayInClosure
{
    public function run()
    {
        $fn = function () {
            return array('a', 'b', 'c');
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayInClosure
{
    public function run()
    {
        $fn = function () {
            return ['a', 'b', 'c'];
        };
    }
}

?>
