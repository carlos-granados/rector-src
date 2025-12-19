<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\ForeachToInArrayRector\Fixture;

final class SkipMultipleIfStatements
{
    public function run(array $items): bool
    {
        foreach ($items as $item) {
            if ($item === 'something') {
                echo 'found';
                return true;
            }
        }

        return false;
    }
}
