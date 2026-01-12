<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class NullableMethodCall
{
    public function accept(?object $obj)
    {
        return $obj?->isValid() || $this->fallback();
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class NullableMethodCall
{
    public function accept(?object $obj)
    {
        if ($obj?->isValid()) {
            return true;
        }
        return (bool) $this->fallback();
    }
}

?>
