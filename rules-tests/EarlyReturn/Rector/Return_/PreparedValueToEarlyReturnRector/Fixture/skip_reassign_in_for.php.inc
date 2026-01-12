<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class SkipReassignInFor
{
    public function run(array $items)
    {
        $count = 0;

        for ($i = 0; $i < 10; $i++) {
            if ($items[$i] ?? false) {
                $count = $i;
            }
        }

        if (rand(0, 1)) {
            $count = 99;
        }

        return $count;
    }
}

?>
