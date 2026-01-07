<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnTagRector\Fixture;

class SkipListArrayType
{
    /**
     * @return list<string>
     */
    public function getNames(): array
    {
        return ['foo', 'bar'];
    }

    /**
     * @return non-empty-list<int>
     */
    public function getNumbers(): array
    {
        return [1, 2, 3];
    }
}

?>
