<?php

namespace Rector\Tests\Php81\Rector\MethodCall\RemoveReflectionSetAccessibleCallsRector\Fixture;

class CustomClass
{
    public function setAccessible(bool $flag): void
    {
    }
}

final class SkipNonReflectionClass
{
    public function run(): void
    {
        $custom = new CustomClass();
        $custom->setAccessible(true);
    }
}
