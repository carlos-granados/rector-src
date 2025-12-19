<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\ForeachToInArrayRector\Fixture;

final class SkipNonConsecutive
{
    public function run(array $items): bool
    {
        foreach ($items as $item) {
            if ($item === 'something') {
                return true;
            }
        }

        $dummy = 'test';

        return false;
    }
}
