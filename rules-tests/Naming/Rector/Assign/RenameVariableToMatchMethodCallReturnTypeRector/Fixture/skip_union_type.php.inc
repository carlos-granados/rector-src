<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source\FastRunner;

class SkipUnionType
{
    public function run()
    {
        // Union types don't have a single class name to use
        $a = $this->getRunnerOrFalse();
    }

    public function getRunnerOrFalse(): FastRunner|false
    {
        return new FastRunner();
    }
}
