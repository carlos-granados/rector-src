<?php

namespace Rector\Tests\Assert\Rector\ClassMethod\AddAssertArrayFromClassMethodDocblockRector\Fixture;

abstract class SkipAbstractMethod
{
    /**
     * @param int[] $items
     */
    abstract public function run(array $items);
}
