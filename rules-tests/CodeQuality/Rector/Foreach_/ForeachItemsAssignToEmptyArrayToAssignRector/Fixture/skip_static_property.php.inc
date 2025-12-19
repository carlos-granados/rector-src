<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\ForeachItemsAssignToEmptyArrayToAssignRector\Fixture;

class SkipStaticProperty
{
    private static array $items = [];

    public function run(array $items)
    {
        self::$items = [];
        foreach ($items as $item) {
            self::$items[] = $item;
        }
    }
}
