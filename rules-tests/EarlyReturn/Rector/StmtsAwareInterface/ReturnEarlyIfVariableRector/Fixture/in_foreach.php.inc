<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class InForeach
{
    public function run(array $items)
    {
        $result = null;

        foreach ($items as $item) {
            if ($item === 50) {
                $result = 100;
            }

            return $result;
        }

        return $result;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class InForeach
{
    public function run(array $items)
    {
        $result = null;

        foreach ($items as $item) {
            if ($item === 50) {
                return 100;
            }

            return $result;
        }

        return $result;
    }
}

?>
