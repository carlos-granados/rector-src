<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayWithSpread
{
    public function run(array $other)
    {
        return array(...$other, 'extra');
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayWithSpread
{
    public function run(array $other)
    {
        return [...$other, 'extra'];
    }
}

?>
