<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnTagRector\Fixture;

class SkipCallableWithParams
{
    /**
     * @return callable(string): int
     */
    public function getTransformer(): callable
    {
        return fn(string $s) => strlen($s);
    }

    /**
     * @return callable(int, string): bool
     */
    public function getValidator(): callable
    {
        return fn(int $i, string $s) => $i > 0 && $s !== '';
    }
}

?>
