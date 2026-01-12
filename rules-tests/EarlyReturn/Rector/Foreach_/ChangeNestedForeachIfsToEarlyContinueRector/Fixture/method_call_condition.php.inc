<?php

namespace Rector\Tests\EarlyReturn\Rector\Foreach_\ChangeNestedForeachIfsToEarlyContinueRector\Fixture;

class MethodCallCondition
{
    public function run(array $items)
    {
        $results = [];

        foreach ($items as $item) {
            if ($item->isValid()) {
                if ($item->hasValue()) {
                    $results[] = $item->getValue();
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

class MethodCallCondition
{
    public function run(array $items)
    {
        $results = [];

        foreach ($items as $item) {
            if (!$item->isValid()) {
                continue;
            }
            if (!$item->hasValue()) {
                continue;
            }
            $results[] = $item->getValue();
        }

        return $results;
    }
}

?>
