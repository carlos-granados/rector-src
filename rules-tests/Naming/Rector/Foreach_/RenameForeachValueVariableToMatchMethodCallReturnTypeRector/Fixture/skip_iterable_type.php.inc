<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchMethodCallReturnTypeRector\Fixture;

class SkipIterableType
{
    public function run()
    {
        foreach ($this->getIterable() as $item) {
            echo $item;
        }
    }

    public function getIterable(): iterable
    {
        return [];
    }
}

