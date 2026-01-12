<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class SingleIf
{
    public function run()
    {
        $result = 'default';

        if (rand(0, 1)) {
            $result = 'changed';
        }

        return $result;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class SingleIf
{
    public function run()
    {
        if (rand(0, 1)) {
            return 'changed';
        }

        return 'default';
    }
}

?>
