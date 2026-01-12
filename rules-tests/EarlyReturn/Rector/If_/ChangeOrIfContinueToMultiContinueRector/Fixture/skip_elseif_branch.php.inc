<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeOrIfContinueToMultiContinueRector\Fixture;

class SkipElseifBranch
{
    public function run()
    {
        foreach ($items as $item) {
            if ($item->isValid() || $item->isEnabled()) {
                continue;
            } elseif ($item->isPending()) {
                doSomething();
            }
        }
    }
}
