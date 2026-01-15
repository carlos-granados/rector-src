<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class MultilineArray
{
    public function run()
    {
        return array(
            'first',
            'second',
            'third',
        );
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class MultilineArray
{
    public function run()
    {
        return [
            'first',
            'second',
            'third',
        ];
    }
}

?>
