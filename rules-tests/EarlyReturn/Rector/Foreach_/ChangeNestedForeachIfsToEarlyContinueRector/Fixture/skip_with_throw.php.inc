<?php

namespace Rector\Tests\EarlyReturn\Rector\Foreach_\ChangeNestedForeachIfsToEarlyContinueRector\Fixture;

class WithThrow
{
    public function run()
    {
        foreach ($values as $value) {
            if ($value === 5) {
                if ($value2 === 10) {
                    throw new \RuntimeException('Invalid value');
                }
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Foreach_\ChangeNestedForeachIfsToEarlyContinueRector\Fixture;

class WithThrow
{
    public function run()
    {
        foreach ($values as $value) {
            if ($value !== 5) {
                continue;
            }
            if ($value2 !== 10) {
                continue;
            }
            throw new \RuntimeException('Invalid value');
        }
    }
}

?>
