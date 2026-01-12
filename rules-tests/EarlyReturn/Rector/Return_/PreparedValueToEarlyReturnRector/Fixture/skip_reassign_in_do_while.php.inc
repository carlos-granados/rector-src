<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class SkipReassignInDoWhile
{
    public function run()
    {
        $result = 0;
        $i = 0;

        do {
            if (rand(0, 1)) {
                $result = $i;
            }
            $i++;
        } while ($i < 5);

        if (rand(0, 1)) {
            $result = 100;
        }

        return $result;
    }
}

?>
