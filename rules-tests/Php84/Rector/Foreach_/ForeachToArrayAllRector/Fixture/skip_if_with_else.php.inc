<?php

namespace Rector\Tests\Php84\Rector\Foreach_\ForeachToArrayAllRector\Fixture;

class SkipIfWithElse
{
    public function booleanAssignmentWithElse(array $animals): bool
    {
        $found = true;
        foreach ($animals as $animal) {
            if (!str_starts_with($animal, 'c')) {
                $found = false;
                break;
            } else {
                echo 'matched';
            }
        }
        return $found;
    }

    public function earlyReturnWithElse(array $animals): bool
    {
        foreach ($animals as $animal) {
            if (!str_starts_with($animal, 'c')) {
                return false;
            } else {
                echo 'matched';
            }
        }
        return true;
    }
}
