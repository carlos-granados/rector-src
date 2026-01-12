<?php

namespace Rector\Tests\EarlyReturn\Rector\Foreach_\ChangeNestedForeachIfsToEarlyContinueRector\Fixture;

class NestedForeachInBody
{
    public function run(array $groups)
    {
        $results = [];

        foreach ($groups as $group) {
            if ($group->isActive()) {
                if ($group->hasItems()) {
                    foreach ($group->getItems() as $item) {
                        $results[] = $item;
                    }
                }
            }
        }

        return $results;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Foreach_\ChangeNestedForeachIfsToEarlyContinueRector\Fixture;

class NestedForeachInBody
{
    public function run(array $groups)
    {
        $results = [];

        foreach ($groups as $group) {
            if (!$group->isActive()) {
                continue;
            }
            if (!$group->hasItems()) {
                continue;
            }
            foreach ($group->getItems() as $item) {
                $results[] = $item;
            }
        }

        return $results;
    }
}

?>
