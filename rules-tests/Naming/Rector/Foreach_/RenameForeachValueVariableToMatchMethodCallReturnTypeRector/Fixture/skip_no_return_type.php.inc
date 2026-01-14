<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

class SkipNoReturnType
{
    public function run()
    {
        foreach ($this->getItems() as $item) {
            echo $item;
        }
    }

    public function getItems()
    {
        return [];
    }
}

