<?php

namespace Rector\Tests\DeadCode\Rector\Cast\RecastingRemovalRector\Fixture;

class FloatCast
{
    public function run()
    {
        $float = 3.14;
        $float = (float) $float;

        $double = 2.71;
        $double = (double) $double;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Cast\RecastingRemovalRector\Fixture;

class FloatCast
{
    public function run()
    {
        $float = 3.14;
        $float = $float;

        $double = 2.71;
        $double = $double;
    }
}

?>
