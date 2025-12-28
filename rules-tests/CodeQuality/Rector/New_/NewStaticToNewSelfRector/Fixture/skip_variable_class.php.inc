<?php

namespace Rector\Tests\CodeQuality\Rector\New_\NewStaticToNewSelfRector\Fixture;

final class SkipVariableClass
{
    public function build(string $className)
    {
        // Should skip: class is a variable, not 'static'
        return new $className();
    }
}
