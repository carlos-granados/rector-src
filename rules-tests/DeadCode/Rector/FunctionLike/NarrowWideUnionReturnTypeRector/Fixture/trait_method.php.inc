<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

trait TraitMethod
{
    public function getData(): string|int|bool
    {
        if (rand(0, 1)) {
            return 'text';
        }

        return 42;
    }
}
