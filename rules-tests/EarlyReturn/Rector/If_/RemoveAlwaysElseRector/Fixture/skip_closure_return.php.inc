<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class SkipClosureReturn
{
    public function run($value)
    {
        if ($value) {
            $fn = function() {
                return 'inside closure';
            };
        } else {
            return 'outside';
        }
    }
}

?>
