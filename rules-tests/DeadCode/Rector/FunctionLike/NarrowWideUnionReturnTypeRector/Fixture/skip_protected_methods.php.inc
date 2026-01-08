<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

class SkipProtectedMethods
{
    protected function getData(): string|int|bool
    {
        if (rand(0, 1)) {
            return 'text';
        }

        return 42;
    }
}
