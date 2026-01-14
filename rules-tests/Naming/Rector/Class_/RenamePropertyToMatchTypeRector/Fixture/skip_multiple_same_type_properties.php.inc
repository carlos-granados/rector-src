<?php

namespace Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Source\EliteManager;

final class SkipMultipleSameTypeProperties
{
    private EliteManager $firstManager;
    private EliteManager $secondManager;

    public function __construct(EliteManager $firstManager, EliteManager $secondManager)
    {
        $this->firstManager = $firstManager;
        $this->secondManager = $secondManager;
    }
}
