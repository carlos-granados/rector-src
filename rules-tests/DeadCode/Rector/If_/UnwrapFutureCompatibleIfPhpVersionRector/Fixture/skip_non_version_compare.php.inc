<?php

namespace Rector\Tests\DeadCode\Rector\If_\UnwrapFutureCompatibleIfPhpVersionRector\Fixture;

class SkipNonVersionCompare
{
    public function run()
    {
        if (true) {
            return 'a';
        } else {
            return 'b';
        }
    }
}
