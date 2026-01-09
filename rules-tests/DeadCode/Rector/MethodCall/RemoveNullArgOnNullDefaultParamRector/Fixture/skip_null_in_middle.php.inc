<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\MethodCall\RemoveNullArgOnNullDefaultParamRector\Fixture;

use Rector\Tests\DeadCode\Rector\MethodCall\RemoveNullArgOnNullDefaultParamRector\Source\SomeExternalClass;

final class SkipNullInMiddle
{
    public function run(SomeExternalClass $class)
    {
        $class->withMiddleNotNullDefault(null, 1, null, 'value');
    }
}
