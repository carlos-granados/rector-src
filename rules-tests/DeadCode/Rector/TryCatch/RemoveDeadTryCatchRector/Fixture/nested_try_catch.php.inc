<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class NestedTryCatch
{
    public function run()
    {
        try {
            try {
                $this->inner();
            } catch (\RuntimeException $inner) {
                throw $inner;
            }
        } catch (\Exception $outer) {
            throw $outer;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class NestedTryCatch
{
    public function run()
    {
        $this->inner();
    }
}

?>
