<?php

namespace Rector\Tests\Assert\Rector\ClassMethod\AddAssertArrayFromClassMethodDocblockRector\Fixture;

final class SkipNullableArray
{
    /**
     * @param int[] $items
     */
    public function run(?array $items)
    {
    }
}
