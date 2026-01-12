<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeOrIfContinueToMultiContinueRector\Fixture;

class SkipBreak
{
    public function run()
    {
        foreach ($items as $item) {
            if ($item->isValid() || $item->isEnabled()) {
                break;
            }
            process($item);
        }
    }
}
