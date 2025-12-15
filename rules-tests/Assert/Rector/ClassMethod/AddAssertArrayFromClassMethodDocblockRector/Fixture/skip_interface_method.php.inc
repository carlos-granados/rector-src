<?php

namespace Rector\Tests\Assert\Rector\ClassMethod\AddAssertArrayFromClassMethodDocblockRector\Fixture;

interface SkipInterfaceMethod
{
    /**
     * @param int[] $items
     */
    public function run(array $items);
}
