<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\ForeachItemsAssignToEmptyArrayToAssignRector\Fixture;

class SkipPropertyAccess
{
    private array $items = [];

    public function run(array $items)
    {
        $this->items = [];
        foreach ($items as $item) {
            $this->items[] = $item;
        }
    }
}
