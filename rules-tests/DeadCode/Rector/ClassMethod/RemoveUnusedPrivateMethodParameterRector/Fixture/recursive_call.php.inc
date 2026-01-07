<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

final class RecursiveCall
{
    private function factorial($n, $unused)
    {
        if ($n <= 1) {
            return 1;
        }
        return $n * $this->factorial($n - 1, 'ignored');
    }

    public function calculate()
    {
        return $this->factorial(5, 'test');
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodParameterRector\Fixture;

final class RecursiveCall
{
    private function factorial($n)
    {
        if ($n <= 1) {
            return 1;
        }
        return $n * $this->factorial($n - 1);
    }

    public function calculate()
    {
        return $this->factorial(5);
    }
}

?>
