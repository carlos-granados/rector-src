<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnTagRector\Fixture;

class SkipArrayShape
{
    /**
     * @return array{foo: string, bar: int}
     */
    public function getStructuredArray(): array
    {
        return ['foo' => 'test', 'bar' => 123];
    }

    /**
     * @return array{0: string, 1: int}
     */
    public function getListArray(): array
    {
        return ['test', 123];
    }
}

?>
