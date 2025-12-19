<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\ForeachToInArrayRector\Fixture;

final class SkipBooleanNot
{
    public function run(array $items): bool
    {
        foreach ($items as $item) {
            if (!($item === 'something')) {
                return true;
            }
        }

        return false;
    }
}
