<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class SkipVariables
{
    public function accept($a, $b)
    {
        return $a || $b;
    }
}

?>
