<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class SkipLowercaseNamespaceStart
{
    public function run()
    {
        // String starting with lowercase - likely not a class name
        return 'some\package\SomeClass';
    }
}
