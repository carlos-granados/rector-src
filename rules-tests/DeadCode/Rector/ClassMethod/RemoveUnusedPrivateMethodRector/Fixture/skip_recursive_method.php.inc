<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodRector\Fixture;

final class SkipRecursiveMethod
{
    public function calculate($n)
    {
        return $this->factorial($n);
    }

    private function factorial($n)
    {
        if ($n <= 1) {
            return 1;
        }
        return $n * $this->factorial($n - 1);
    }
}

?>
