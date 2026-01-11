<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class MultiTypeCatch
{
    public function run()
    {
        try {
            $this->doSomething();
        } catch (\RuntimeException|\InvalidArgumentException $e) {
            throw $e;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class MultiTypeCatch
{
    public function run()
    {
        $this->doSomething();
    }
}

?>
