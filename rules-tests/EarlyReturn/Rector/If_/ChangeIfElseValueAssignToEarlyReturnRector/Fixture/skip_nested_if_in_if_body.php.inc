<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class SkipNestedIfInIfBody
{
    public function run($condition, $extra)
    {
        if ($condition) {
            if ($extra) {
                $value = 'extra';
            } else {
                $value = 'no-extra';
            }
        } else {
            $value = 'default';
        }

        return $value;
    }
}
