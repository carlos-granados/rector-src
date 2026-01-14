<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Source\EliteManager;

class SkipAlreadyMatching
{
    public function process(EliteManager $eliteManager): void
    {
        $eliteManager->handle();
    }
}
