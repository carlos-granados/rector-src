<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayWithConstKey
{
    private const KEY = 'mykey';

    public function run()
    {
        return array(self::KEY => 'value');
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayWithConstKey
{
    private const KEY = 'mykey';

    public function run()
    {
        return [self::KEY => 'value'];
    }
}

?>
