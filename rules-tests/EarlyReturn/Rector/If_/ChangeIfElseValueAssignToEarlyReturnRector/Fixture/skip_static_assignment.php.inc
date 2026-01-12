<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class SkipStaticAssignment
{
    public function run($condition)
    {
        if ($condition) {
            self::$value = 'changed';
        } else {
            self::$value = 'default';
        }

        return self::$value;
    }

    private static $value;
}
