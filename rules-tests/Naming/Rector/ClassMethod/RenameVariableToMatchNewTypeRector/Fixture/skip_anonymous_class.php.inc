<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

final class SkipAnonymousClass
{
    public function run()
    {
        $handler = new class {
            public function handle(): void
            {
            }
        };
        $handler->handle();
    }
}
