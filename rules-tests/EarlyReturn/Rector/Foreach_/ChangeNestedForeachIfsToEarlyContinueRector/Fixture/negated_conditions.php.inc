<?php

namespace Rector\Tests\EarlyReturn\Rector\Foreach_\ChangeNestedForeachIfsToEarlyContinueRector\Fixture;

class NegatedConditions
{
    public function run(array $items)
    {
        $results = [];

        foreach ($items as $item) {
            if (!empty($item)) {
                if (!is_null($item->value)) {
                    $results[] = $item->value;
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

class NegatedConditions
{
    public function run(array $items)
    {
        $results = [];

        foreach ($items as $item) {
            if (empty($item)) {
                continue;
            }
            if (is_null($item->value)) {
                continue;
            }
            $results[] = $item->value;
        }

        return $results;
    }
}

?>
