<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\SimplifyEmptyArrayCheckRector\Fixture;

final class SkipNamedArguments
{
    public function isEmptyArray($values): bool
    {
        return is_array(value: $values) && empty($values);
    }
}
