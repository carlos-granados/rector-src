<?php

namespace Rector\Tests\Php55\Rector\String_\StringClassNameToClassConstantRector\Fixture;

final class SkipWildcardPattern
{
    public function run()
    {
        // Nette\* is configured to be skipped via wildcard
        return 'Nette\Application\Application';
    }
}
