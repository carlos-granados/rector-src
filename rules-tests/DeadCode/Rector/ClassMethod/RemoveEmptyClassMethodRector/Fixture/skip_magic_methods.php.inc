<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveEmptyClassMethodRector\Fixture;

class SkipMagicMethods
{
    public function __call($name, $arguments)
    {
    }

    public function __callStatic($name, $arguments)
    {
    }

    public function __debugInfo()
    {
    }

    public function __serialize()
    {
    }
}
