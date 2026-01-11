<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class SkipCatchWithModification
{
    public function run()
    {
        try {
            $this->doSomething();
        } catch (\Exception $e) {
            $e = $e->getPrevious() ?? $e;
            throw $e;
        }
    }
}
