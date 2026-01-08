<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\NarrowWideUnionReturnTypeRector\Fixture;

enum Status: string
{
    case ACTIVE = 'active';
    case INACTIVE = 'inactive';

    public function getLabel(): string|int|bool
    {
        if ($this === self::ACTIVE) {
            return 'Active';
        }

        return 'Inactive';
    }
}
