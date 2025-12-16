<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RemoveUselessIsObjectCheckRector\Fixture;

final class SkipNamedArguments
{
    public function run($obj)
    {
        return is_object(object: $obj) && $obj instanceof \DateTime;
    }
}
