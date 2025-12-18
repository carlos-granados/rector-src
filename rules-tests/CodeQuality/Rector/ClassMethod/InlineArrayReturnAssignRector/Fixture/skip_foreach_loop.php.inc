<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\InlineArrayReturnAssignRector\Fixture;

final class SkipForeachLoop
{
    public function run(array $data)
    {
        $items = [];

        foreach ($data as $key => $value) {
            $items[$key] = $value * 2;
        }

        return $items;
    }
}
