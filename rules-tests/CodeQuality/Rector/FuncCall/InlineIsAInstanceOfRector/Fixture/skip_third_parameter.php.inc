<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Fixture;

use Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Source\SomeType;

final class SkipThirdParameter
{
    public function run(object $object)
    {
        return is_a($object, SomeType::class, true);
    }
}
