<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class ExpressionInitialValue
{
    public function run(int $default)
    {
        $result = $default * 2;

        if (rand(0, 1)) {
            $result = 100;
        }

        if (rand(0, 2)) {
            $result = 200;
        }

        return $result;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class ExpressionInitialValue
{
    public function run(int $default)
    {
        if (rand(0, 1)) {
            return 100;
        }

        if (rand(0, 2)) {
            return 200;
        }

        return $default * 2;
    }
}

?>
