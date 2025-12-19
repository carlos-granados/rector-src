<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\SimplifyForeachToCoalescingRector\Fixture;

final class AssignWithCoalesce
{
    public function run(array $oldToNewFunctions, $currentFunction)
    {
        $result = 'default';
        foreach ($oldToNewFunctions as $oldFunction => $newFunction) {
            if ($currentFunction === $oldFunction) {
                $result = $newFunction;
            }
        }

        return $result;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\SimplifyForeachToCoalescingRector\Fixture;

final class AssignWithCoalesce
{
    public function run(array $oldToNewFunctions, $currentFunction)
    {
        $result = 'default';
        $result = $oldToNewFunctions[$currentFunction] ?? $result;

        return $result;
    }
}

?>
