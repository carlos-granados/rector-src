<?php

namespace Rector\Tests\DeadCode\Rector\Cast\RecastingRemovalRector\Fixture;

class NestedCasts
{
    public function run()
    {
        $string = 'test';
        $result = (string) (string) $string;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Cast\RecastingRemovalRector\Fixture;

class NestedCasts
{
    public function run()
    {
        $string = 'test';
        $result = $string;
    }
}

?>
