<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\InlineArrayReturnAssignRector\Fixture;

final class SkipReadonlyPropertyAssign
{
    private readonly array $items;

    public function run()
    {
        $items = [];
        $items['name'] = 'Timmy';
        $items['surname'] = 'Back';

        // Cannot inline if we need the variable for property assignment
        $this->items = $items;

        return $items;
    }
}
