<?php

namespace Rector\Tests\EarlyReturn\Rector\Foreach_\ChangeNestedForeachIfsToEarlyContinueRector\Fixture;

class InstanceofCondition
{
    public function run(array $objects)
    {
        $items = [];

        foreach ($objects as $object) {
            if ($object instanceof \stdClass) {
                if ($object->value !== null) {
                    $items[] = $object->value;
                }
            }
        }

        return $items;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Foreach_\ChangeNestedForeachIfsToEarlyContinueRector\Fixture;

class InstanceofCondition
{
    public function run(array $objects)
    {
        $items = [];

        foreach ($objects as $object) {
            if (!$object instanceof \stdClass) {
                continue;
            }
            if ($object->value === null) {
                continue;
            }
            $items[] = $object->value;
        }

        return $items;
    }
}

?>
