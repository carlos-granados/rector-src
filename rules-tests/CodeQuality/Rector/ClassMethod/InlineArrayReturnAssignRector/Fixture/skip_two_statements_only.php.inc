<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\InlineArrayReturnAssignRector\Fixture;

final class SkipTwoStatementsOnly
{
    public function run()
    {
        $items = [];
        return $items;
    }
}
