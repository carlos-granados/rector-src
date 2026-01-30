<?php

namespace Rector\Tests\Php84\Rector\Foreach_\ForeachToArrayFindRector\Fixture;

class SkipIfWithElse
{
    public function findWithElse(array $animals)
    {
        $found = null;
        foreach ($animals as $animal) {
            if (str_starts_with($animal, 'c')) {
                $found = $animal;
                break;
            } else {
                echo 'not matched';
            }
        }
        return $found;
    }
}
