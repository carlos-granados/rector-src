<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source\FastRunner;

class SkipNullableReturnType
{
    public function run()
    {
        $a = $this->getFastRunner();
        if ($a !== null) {
            $a->exit();
        }
    }

    public function getFastRunner(): ?FastRunner
    {
        return new FastRunner();
    }
}
