<?php

namespace Rector\Tests\CodeQuality\Rector\If_\ExplicitBoolCompareRector\Fixture;

final class SkipCountNamedArguments
{
    public function run($items)
    {
        if (!count(value: $items)) {
            return 'no items';
        }
    }
}

?>
