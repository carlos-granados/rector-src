<?php

namespace Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Source\EliteManager;

final class SkipAlreadyMatchingName
{
    private EliteManager $eliteManager;

    public function __construct(EliteManager $eliteManager)
    {
        $this->eliteManager = $eliteManager;
    }
}
