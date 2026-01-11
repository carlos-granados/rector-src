<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class TryInClosure
{
    public function run()
    {
        return function () {
            try {
                return $this->compute();
            } catch (\Exception $e) {
                throw $e;
            }
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class TryInClosure
{
    public function run()
    {
        return function () {
            return $this->compute();
        };
    }
}

?>
