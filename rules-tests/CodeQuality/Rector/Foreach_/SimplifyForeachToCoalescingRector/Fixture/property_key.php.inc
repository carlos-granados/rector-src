<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\SimplifyForeachToCoalescingRector\Fixture;

final class PropertyKey
{
    private string $searchKey;

    public function run(array $oldToNewFunctions)
    {
        foreach ($oldToNewFunctions as $oldFunction => $newFunction) {
            if ($this->searchKey === $oldFunction) {
                return $newFunction;
            }
        }

        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\SimplifyForeachToCoalescingRector\Fixture;

final class PropertyKey
{
    private string $searchKey;

    public function run(array $oldToNewFunctions)
    {
        return $oldToNewFunctions[$this->searchKey] ?? null;
    }
}

?>
