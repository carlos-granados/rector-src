<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Fixture;

use Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Source\SomeType;

final class SkipNamedArguments
{
    public function run(object $object)
    {
        return is_a(object_or_class: $object, class: SomeType::class);
    }
}
