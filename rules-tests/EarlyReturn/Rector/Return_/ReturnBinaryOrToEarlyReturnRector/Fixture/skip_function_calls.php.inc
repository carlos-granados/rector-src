<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class SkipFunctionCalls
{
    public function accept($value)
    {
        return is_string($value) || is_int($value);
    }
}

?>
