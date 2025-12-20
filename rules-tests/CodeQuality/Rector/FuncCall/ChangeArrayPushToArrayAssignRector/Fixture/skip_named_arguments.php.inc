<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ChangeArrayPushToArrayAssignRector\Fixture;

final class SkipNamedArguments
{
    public function run()
    {
        $items = [];
        array_push(array: $items, values: $item);
    }
}
