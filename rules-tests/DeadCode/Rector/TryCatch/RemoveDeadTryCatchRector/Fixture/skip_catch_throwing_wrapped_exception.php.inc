<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class SkipCatchThrowingWrappedException
{
    public function run()
    {
        try {
            $this->doSomething();
        } catch (\Exception $e) {
            throw new \RuntimeException('Wrapped', 0, $e);
        }
    }
}
