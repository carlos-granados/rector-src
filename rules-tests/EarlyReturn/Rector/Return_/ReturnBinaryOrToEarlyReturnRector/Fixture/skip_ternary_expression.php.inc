<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class SkipTernaryExpression
{
    public function accept($condition)
    {
        return $condition ? $this->something() : $this->somethingElse();
    }
}

?>
