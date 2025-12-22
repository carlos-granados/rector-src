<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\SimplifyConditionsRector\Fixture;

class SimpleInversions
{
    public function run($value)
    {
        // Simple inversions that should work
        $result = !($value < 10);
        $result = !($value > 10);
        $result = !($value <= 10);
        $result = !($value != 10);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\SimplifyConditionsRector\Fixture;

class SimpleInversions
{
    public function run($value)
    {
        // Simple inversions that should work
        $result = $value >= 10;
        $result = $value <= 10;
        $result = $value > 10;
        $result = $value == 10;
    }
}

?>
