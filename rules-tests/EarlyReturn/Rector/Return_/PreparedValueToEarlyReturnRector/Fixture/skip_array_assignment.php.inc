<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class SkipArrayAssignment
{
    public function run()
    {
        $data['key'] = null;

        if (rand(0, 1)) {
            $data['key'] = 1;
        }

        if (rand(0, 2)) {
            $data['key'] = 2;
        }

        return $data['key'];
    }
}

?>
