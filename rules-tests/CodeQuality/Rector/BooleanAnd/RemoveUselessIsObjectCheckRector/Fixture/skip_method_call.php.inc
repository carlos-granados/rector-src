<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RemoveUselessIsObjectCheckRector\Fixture;

final class SkipMethodCall
{
    public function run($obj, $checker)
    {
        // This is a method call, not a function call
        return $checker->is_object($obj) && $obj instanceof \DateTime;
    }
}
