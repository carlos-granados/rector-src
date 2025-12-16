<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\SimplifyEmptyArrayCheckRector\Fixture;

final class SkipFirstClassCallable
{
    public function test(): bool
    {
        $callable = is_array(...);
        $values = [];
        return empty($values);
    }
}
