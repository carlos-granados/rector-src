<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source\FastRunner;

class SkipAlreadyMatching
{
    public function run()
    {
        $fastRunner = $this->getFastRunner();
        $fastRunner->exit();
    }

    public function getFastRunner(): FastRunner
    {
        return new FastRunner();
    }
}
