<?php

namespace Rector\Tests\DeadCode\Rector\ConstFetch\RemovePhpVersionIdCheckRector\Fixture;

class SkipSmallerOrEqualLeftFuture
{
    public function run()
    {
        if (PHP_VERSION_ID <= 90000) {
            return;
        }
        echo 'do something';
    }
}

?>
