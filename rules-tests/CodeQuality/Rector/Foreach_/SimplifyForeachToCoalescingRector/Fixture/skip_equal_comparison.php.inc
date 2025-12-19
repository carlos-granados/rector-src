<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\SimplifyForeachToCoalescingRector\Fixture;

final class SkipEqualComparison
{
    public function run(array $oldToNewFunctions, $currentFunction)
    {
        foreach ($oldToNewFunctions as $oldFunction => $newFunction) {
            if ($currentFunction == $oldFunction) {
                return $newFunction;
            }
        }

        return null;
    }
}
