<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class SkipArrowFunctionThrow
{
    public function run($value)
    {
        if ($value) {
            $fn = fn() => throw new \Exception('error');
        } else {
            return 'outside';
        }
    }
}

?>
