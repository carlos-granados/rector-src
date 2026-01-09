<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use stdClass;

class SkipStaticPropertyFetch
{
    private static ?stdClass $var = null;

    public static function init(): void
    {
        self::$var = new stdClass;
    }

    public static function go(): bool
    {
        if (! self::$var instanceof stdClass) {
            return false;
        }
        return true;
    }
}
