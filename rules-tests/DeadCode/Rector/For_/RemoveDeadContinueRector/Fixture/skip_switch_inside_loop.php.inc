<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadContinueRector\Fixture;

class SkipSwitchInsideLoop
{
    public function run($values)
    {
        foreach ($values as $value) {
            switch ($value) {
                case 1:
                    echo 'one';
                    continue;
                case 2:
                    echo 'two';
                    continue;
            }
        }
    }
}
