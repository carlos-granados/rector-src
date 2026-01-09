<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveAlwaysTrueIfConditionRector\Fixture;

class InstanceofCheck
{
    public function run(\stdClass $object)
    {
        if ($object instanceof \stdClass) {
            return 'yes';
        }

        return 'no';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveAlwaysTrueIfConditionRector\Fixture;

class InstanceofCheck
{
    public function run(\stdClass $object)
    {
        return 'yes';

        return 'no';
    }
}

?>
