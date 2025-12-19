<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\ForeachItemsAssignToEmptyArrayToAssignRector\Fixture;

class SkipReferenceValue
{
    public function run(array $items)
    {
        $result = [];
        foreach ($items as &$item) {
            $result[] = $item;
        }
    }
}
