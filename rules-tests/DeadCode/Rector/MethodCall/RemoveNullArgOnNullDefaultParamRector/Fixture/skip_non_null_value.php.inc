<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\MethodCall\RemoveNullArgOnNullDefaultParamRector\Fixture;

use Rector\Tests\DeadCode\Rector\MethodCall\RemoveNullArgOnNullDefaultParamRector\Source\SomeExternalClass;

final class SkipNonNullValue
{
    public function run(SomeExternalClass $class)
    {
        $class->callWithDefaultNull('value');
    }
}
