<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\PreparedValueToEarlyReturnRector\Fixture;

class SkipPropertyAssignment
{
    private $value;

    public function run()
    {
        $this->value = null;

        if (rand(0, 1)) {
            $this->value = 1;
        }

        if (rand(0, 2)) {
            $this->value = 2;
        }

        return $this->value;
    }
}

?>
