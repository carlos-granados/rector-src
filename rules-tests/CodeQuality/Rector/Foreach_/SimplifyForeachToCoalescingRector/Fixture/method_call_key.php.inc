<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\SimplifyForeachToCoalescingRector\Fixture;

final class MethodCallKey
{
    public function run(array $oldToNewFunctions, $currentFunction)
    {
        foreach ($oldToNewFunctions as $oldFunction => $newFunction) {
            if ($this->normalize($currentFunction) === $oldFunction) {
                return $newFunction;
            }
        }

        return null;
    }

    private function normalize(string $value): string
    {
        return strtolower($value);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\SimplifyForeachToCoalescingRector\Fixture;

final class MethodCallKey
{
    public function run(array $oldToNewFunctions, $currentFunction)
    {
        return $oldToNewFunctions[$this->normalize($currentFunction)] ?? null;
    }

    private function normalize(string $value): string
    {
        return strtolower($value);
    }
}

?>
