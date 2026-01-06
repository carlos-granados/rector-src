<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveNullTagValueNodeRector\Fixture;

class SkipUnionType
{
    /**
     * @param null|string $foo
     * @return null|int
     */
    function foo($foo = null)
    {
        return null;
    }
}
