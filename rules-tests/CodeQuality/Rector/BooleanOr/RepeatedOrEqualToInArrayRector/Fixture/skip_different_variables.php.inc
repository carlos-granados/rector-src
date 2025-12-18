<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanOr\RepeatedOrEqualToInArrayRector\Fixture;

final class SkipDifferentVariables
{
    public function demo($var1, $var2, $var3): bool
    {
        if ($var1 === 'a' || $var2 === 'b' || $var3 === 'c') {
            return true;
        }

        return false;
    }
}
