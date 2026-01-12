<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class InstanceofCheck
{
    public function accept($obj)
    {
        return $obj->isValid() || $obj instanceof \stdClass;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class InstanceofCheck
{
    public function accept($obj)
    {
        if ($obj->isValid()) {
            return true;
        }
        return $obj instanceof \stdClass;
    }
}

?>
