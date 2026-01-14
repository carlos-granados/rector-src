<?php

namespace Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Source\EliteManager;

abstract class SkipAbstractClassProtectedProperty
{
    protected EliteManager $eventManager;

    public function __construct(EliteManager $eventManager)
    {
        $this->eventManager = $eventManager;
    }
}
