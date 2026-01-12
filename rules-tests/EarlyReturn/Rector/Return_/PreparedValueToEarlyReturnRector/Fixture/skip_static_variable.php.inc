<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class SkipStaticVariable
{
    public function run()
    {
        static $cache = null;

        if (rand(0, 1)) {
            $cache = 1;
        }

        if (rand(0, 2)) {
            $cache = 2;
        }

        return $cache;
    }
}

?>
