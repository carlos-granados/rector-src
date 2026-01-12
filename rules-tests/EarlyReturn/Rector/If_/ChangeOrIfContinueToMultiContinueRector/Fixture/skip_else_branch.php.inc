<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeOrIfContinueToMultiContinueRector\Fixture;

class SkipElseBranch
{
    public function run()
    {
        foreach ($items as $item) {
            if ($item->isValid() || $item->isEnabled()) {
                continue;
            } else {
                doSomething();
            }
        }
    }
}
