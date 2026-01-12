<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class ThreeIfs
{
    public function run()
    {
        $result = 'default';

        if (rand(0, 1)) {
            $result = 'first';
        }

        if (rand(0, 2)) {
            $result = 'second';
        }

        if (rand(0, 3)) {
            $result = 'third';
        }

        return $result;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class ThreeIfs
{
    public function run()
    {
        if (rand(0, 1)) {
            return 'first';
        }

        if (rand(0, 2)) {
            return 'second';
        }

        if (rand(0, 3)) {
            return 'third';
        }

        return 'default';
    }
}

?>
