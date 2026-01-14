<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Source\DreamSearch;

final class SkipAlreadyMatching
{
    public function run()
    {
        $dreamSearch = new DreamSearch();
        return $dreamSearch;
    }
}
