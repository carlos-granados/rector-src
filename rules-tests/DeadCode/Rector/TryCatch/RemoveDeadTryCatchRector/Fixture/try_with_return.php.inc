<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class TryWithReturn
{
    public function run()
    {
        try {
            return $this->compute();
        } catch (\Exception $e) {
            throw $e;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class TryWithReturn
{
    public function run()
    {
        return $this->compute();
    }
}

?>
