<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayInMatch
{
    public function run(int $value)
    {
        return match ($value) {
            1 => array('one'),
            2 => array('two'),
            default => array('other'),
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Array_\LongArrayToShortArrayTest\Fixture;

class ArrayInMatch
{
    public function run(int $value)
    {
        return match ($value) {
            1 => ['one'],
            2 => ['two'],
            default => ['other'],
        };
    }
}

?>
