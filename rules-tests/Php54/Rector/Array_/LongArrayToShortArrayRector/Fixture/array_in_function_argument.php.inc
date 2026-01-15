<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayInFunctionArgument
{
    public function run()
    {
        someFunction(array(1, 2, 3));
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayInFunctionArgument
{
    public function run()
    {
        someFunction([1, 2, 3]);
    }
}

?>
