<?php

namespace Rector\Tests\CodeQuality\Rector\If_\ExplicitBoolCompareRector\Fixture;

final class SkipCountMultipleArgs
{
    public function run($items)
    {
        // count() with COUNT_RECURSIVE should be skipped
        if (!count($items, COUNT_RECURSIVE)) {
            return 'no items';
        }
    }
}

?>
