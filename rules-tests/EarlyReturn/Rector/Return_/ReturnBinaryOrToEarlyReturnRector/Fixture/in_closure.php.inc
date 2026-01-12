<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class InClosure
{
    public function run()
    {
        $closure = function () {
            return $this->something() || $this->somethingElse();
        };

        return $closure;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class InClosure
{
    public function run()
    {
        $closure = function () {
            if ($this->something()) {
                return true;
            }
            return (bool) $this->somethingElse();
        };

        return $closure;
    }
}

?>
