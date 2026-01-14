<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

class SkipNoType
{
    public function process($manager): void
    {
        $manager->handle();
    }
}
