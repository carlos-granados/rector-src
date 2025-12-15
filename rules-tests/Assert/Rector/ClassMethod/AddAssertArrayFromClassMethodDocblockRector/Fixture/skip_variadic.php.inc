<?php

namespace Rector\Tests\Assert\Rector\ClassMethod\AddAssertArrayFromClassMethodDocblockRector\Fixture;

final class SkipVariadic
{
    /**
     * @param int[] $items
     */
    public function run(array ...$items)
    {
    }
}
