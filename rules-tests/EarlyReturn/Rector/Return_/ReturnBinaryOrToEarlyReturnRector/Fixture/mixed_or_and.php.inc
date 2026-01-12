<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class MixedOrAnd
{
    public function accept()
    {
        return $this->something() || ($this->other() && $this->another());
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class MixedOrAnd
{
    public function accept()
    {
        if ($this->something()) {
            return true;
        }
        return $this->other() && $this->another();
    }
}

?>
