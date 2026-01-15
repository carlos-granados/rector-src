<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class AssociativeArray
{
    public function run()
    {
        return array('key1' => 'value1', 'key2' => 'value2');
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class AssociativeArray
{
    public function run()
    {
        return ['key1' => 'value1', 'key2' => 'value2'];
    }
}

?>
