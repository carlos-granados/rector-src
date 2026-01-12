<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class AssignWithMethodCall
{
    public function run($value)
    {
        if ($value === 50) {
            $value = $this->calculate();
        }

        return $value;
    }

    private function calculate(): int
    {
        return 100;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class AssignWithMethodCall
{
    public function run($value)
    {
        if ($value === 50) {
            return $this->calculate();
        }

        return $value;
    }

    private function calculate(): int
    {
        return 100;
    }
}

?>
