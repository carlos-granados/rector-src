<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

class InstanceofCheck
{
    public function run(\stdClass $object)
    {
        if (! $object instanceof \stdClass || $object->prop > 50) {
            return 'yes';
        }

        return 'no';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

class InstanceofCheck
{
    public function run(\stdClass $object)
    {
        if ($object->prop > 50) {
            return 'yes';
        }

        return 'no';
    }
}

?>
