<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class BooleanInitialValue
{
    public function run()
    {
        $isValid = false;

        if (rand(0, 1)) {
            $isValid = true;
        }

        if (rand(0, 2)) {
            $isValid = true;
        }

        return $isValid;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class BooleanInitialValue
{
    public function run()
    {
        if (rand(0, 1)) {
            return true;
        }

        if (rand(0, 2)) {
            return true;
        }

        return false;
    }
}

?>
