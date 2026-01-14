<?php

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source\FastRunner;

class SkipInsideForeachLoop
{
    private array $items = [];

    public function run()
    {
        foreach ($this->items as $item) {
            $a = $this->getFastRunner();
            $a->exit();
        }
    }

    public function getFastRunner(): FastRunner
    {
        return new FastRunner();
    }
}
