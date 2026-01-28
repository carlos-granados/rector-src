<?php

namespace Rector\Tests\Php81\Rector\MethodCall\RemoveReflectionSetAccessibleCallsRector\Fixture;

use ReflectionProperty;

final class SkipAssignmentExpression
{
    public function run(): void
    {
        $reflectionProperty = new ReflectionProperty(self::class, 'foo');
        $result = $reflectionProperty->setAccessible(true);
    }
}
