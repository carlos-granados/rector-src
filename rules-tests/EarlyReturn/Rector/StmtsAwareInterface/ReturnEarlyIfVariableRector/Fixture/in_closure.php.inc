<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class InClosure
{
    public function run()
    {
        return function ($value) {
            if ($value === 50) {
                $value = 100;
            }

            return $value;
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class InClosure
{
    public function run()
    {
        return function ($value) {
            if ($value === 50) {
                return 100;
            }

            return $value;
        };
    }
}

?>
