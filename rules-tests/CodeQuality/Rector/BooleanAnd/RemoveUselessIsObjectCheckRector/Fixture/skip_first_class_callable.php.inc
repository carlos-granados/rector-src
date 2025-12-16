<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RemoveUselessIsObjectCheckRector\Fixture;

final class SkipFirstClassCallable
{
    public function run($obj)
    {
        $callable = is_object(...);
        return $obj instanceof \DateTime;
    }
}
