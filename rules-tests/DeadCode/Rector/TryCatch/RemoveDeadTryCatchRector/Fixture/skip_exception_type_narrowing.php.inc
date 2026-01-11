<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class SkipExceptionTypeNarrowing
{
    /**
     * @throws \InvalidArgumentException
     */
    public function run()
    {
        try {
            $this->mayThrowAny();
        } catch (\InvalidArgumentException $e) {
            throw $e;
        } catch (\Exception $e) {
            // Silently ignore other exceptions
        }
    }
}
