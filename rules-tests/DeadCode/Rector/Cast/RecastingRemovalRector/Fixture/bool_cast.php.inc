<?php

namespace Rector\Tests\DeadCode\Rector\Cast\RecastingRemovalRector\Fixture;

class BoolCast
{
    public function run()
    {
        $bool = true;
        $bool = (bool) $bool;

        $result = false;
        $result = (bool) $result;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Cast\RecastingRemovalRector\Fixture;

class BoolCast
{
    public function run()
    {
        $bool = true;
        $bool = $bool;

        $result = false;
        $result = $result;
    }
}

?>
