<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class ThreeConditions
{
    public function accept()
    {
        return $this->first() || $this->second() || $this->third();
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class ThreeConditions
{
    public function accept()
    {
        if ($this->first()) {
            return true;
        }
        if ($this->second()) {
            return true;
        }
        return (bool) $this->third();
    }
}

?>
