<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayInTernary
{
    public function run(bool $condition)
    {
        return $condition ? array(1, 2) : array(3, 4);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayInTernary
{
    public function run(bool $condition)
    {
        return $condition ? [1, 2] : [3, 4];
    }
}

?>
