<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\ForeachItemsAssignToEmptyArrayToAssignRector\Fixture;

class SkipForeachWithKey
{
    public function run(array $items)
    {
        $result = [];
        foreach ($items as $key => $value) {
            $result[] = $value;
        }
    }
}
