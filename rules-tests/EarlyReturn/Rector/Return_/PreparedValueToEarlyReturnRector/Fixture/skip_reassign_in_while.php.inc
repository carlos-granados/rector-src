<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class SkipReassignInWhile
{
    public function run(array $items)
    {
        $found = false;
        $i = 0;

        while ($i < count($items)) {
            if ($items[$i] === 'target') {
                $found = true;
            }
            $i++;
        }

        if (rand(0, 1)) {
            $found = true;
        }

        return $found;
    }
}

?>
