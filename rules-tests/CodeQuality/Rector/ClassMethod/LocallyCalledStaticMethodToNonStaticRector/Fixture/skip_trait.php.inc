<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\LocallyCalledStaticMethodToNonStaticRector\Fixture;

trait SkipTrait
{
    public function run()
    {
        self::someStatic();
    }

    private static function someStatic()
    {
    }
}
