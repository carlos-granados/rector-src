<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Source\DreamSearch;

final class SkipInForeachLoop
{
    public function run(array $items)
    {
        foreach ($items as $item) {
            $search = new DreamSearch();
            $search->reachIt();
        }
    }
}
