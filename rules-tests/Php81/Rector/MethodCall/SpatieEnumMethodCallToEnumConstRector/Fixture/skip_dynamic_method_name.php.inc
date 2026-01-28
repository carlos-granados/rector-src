<?php

namespace Rector\Tests\Php81\Rector\MethodCall\SpatieEnumMethodCallToEnumConstRector\Fixture;

use Rector\Tests\Php81\Rector\MethodCall\SpatieEnumMethodCallToEnumConstRector\Source\StatusEnum;

final class SkipDynamicMethodName
{
    public function run(string $method)
    {
        StatusEnum::{$method}();
    }
}
