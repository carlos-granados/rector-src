<?php

namespace Rector\Tests\Php84\Rector\Foreach_\ForeachToArrayFindKeyRector\Fixture;

class SkipIfWithElse
{
    public function findKeyWithElse(array $animals)
    {
        $found = null;
        foreach ($animals as $idx => $animal) {
            if (str_starts_with($animal, 'c')) {
                $found = $idx;
                break;
            } else {
                echo 'not matched';
            }
        }
        return $found;
    }
}
