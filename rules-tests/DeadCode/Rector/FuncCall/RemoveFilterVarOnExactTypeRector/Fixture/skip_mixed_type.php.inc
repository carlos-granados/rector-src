<?php

namespace Rector\Tests\DeadCode\Rector\FuncCall\RemoveFilterVarOnExactTypeRector\Fixture;

final class SkipMixedType
{
    public function run(mixed $value)
    {
        return filter_var($value, FILTER_VALIDATE_INT);
    }
}
