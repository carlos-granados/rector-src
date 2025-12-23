<?php

namespace Rector\Tests\CodeQuality\Rector\If_\ExplicitBoolCompareRector\Fixture;

final class SkipCountSpreadOperator
{
    public function run($items)
    {
        if (!count(...$items)) {
            return 'no items';
        }
    }
}

?>
