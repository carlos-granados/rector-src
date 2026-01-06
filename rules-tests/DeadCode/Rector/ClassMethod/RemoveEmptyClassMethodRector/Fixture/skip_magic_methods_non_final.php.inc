<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveEmptyClassMethodRector\Fixture;

class SkipMagicMethodsNonFinal
{
    public function __call($name, $arguments)
    {
    }
}
