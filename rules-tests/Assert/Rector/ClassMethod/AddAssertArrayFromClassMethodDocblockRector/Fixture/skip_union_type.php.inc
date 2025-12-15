<?php

namespace Rector\Tests\Assert\Rector\ClassMethod\AddAssertArrayFromClassMethodDocblockRector\Fixture;

final class SkipUnionType
{
    /**
     * @param int[] $items
     */
    public function run(array|null $items)
    {
    }
}
