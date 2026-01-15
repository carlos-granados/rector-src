<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayAsPropertyDefault
{
    public array $items = array('item1', 'item2');
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayAsPropertyDefault
{
    public array $items = ['item1', 'item2'];
}

?>
