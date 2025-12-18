<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\InlineArrayReturnAssignRector\Fixture;

final class SkipWhileLoop
{
    public function run()
    {
        $items = [];
        $counter = 0;

        while ($counter < 3) {
            $items[] = $counter;
            $counter++;
        }

        return $items;
    }
}
