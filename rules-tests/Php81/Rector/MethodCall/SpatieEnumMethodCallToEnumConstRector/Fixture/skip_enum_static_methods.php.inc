<?php

namespace Rector\Tests\Php81\Rector\MethodCall\SpatieEnumMethodCallToEnumConstRector\Fixture;

use Rector\Tests\Php81\Rector\MethodCall\SpatieEnumMethodCallToEnumConstRector\Source\StatusEnum;

final class SkipEnumStaticMethods
{
    public function run($value)
    {
        StatusEnum::from($value);
        StatusEnum::values();
        StatusEnum::keys();
        StatusEnum::isValid($value);
        StatusEnum::search($value);
        StatusEnum::toArray();
        StatusEnum::assertValidValue($value);
    }
}
