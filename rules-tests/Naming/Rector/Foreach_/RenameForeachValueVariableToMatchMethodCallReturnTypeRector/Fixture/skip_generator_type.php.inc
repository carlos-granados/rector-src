<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

use Generator;

class SkipGeneratorType
{
    public function run()
    {
        foreach ($this->getItems() as $item) {
            echo $item;
        }
    }

    public function getItems(): Generator
    {
        yield 1;
        yield 2;
    }
}

