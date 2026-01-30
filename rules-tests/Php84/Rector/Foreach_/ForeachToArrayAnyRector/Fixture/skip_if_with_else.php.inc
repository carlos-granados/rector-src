<?php

namespace Rector\Tests\Php84\Rector\Foreach_\ForeachToArrayAnyRector\Fixture;

class SkipIfWithElse
{
    public function booleanAssignmentWithElse(array $animals): bool
    {
        $found = false;
        foreach ($animals as $animal) {
            if (str_starts_with($animal, 'c')) {
                $found = true;
                break;
            } else {
                echo 'not matched';
            }
        }
        return $found;
    }

    public function earlyReturnWithElse(array $animals): bool
    {
        foreach ($animals as $animal) {
            if (str_starts_with($animal, 'c')) {
                return true;
            } else {
                echo 'not matched';
            }
        }
        return false;
    }
}
