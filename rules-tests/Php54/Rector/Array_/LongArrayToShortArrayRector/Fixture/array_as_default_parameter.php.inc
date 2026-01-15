<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayAsDefaultParameter
{
    public function run(array $items = array('default'))
    {
        return $items;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayAsDefaultParameter
{
    public function run(array $items = ['default'])
    {
        return $items;
    }
}

?>
