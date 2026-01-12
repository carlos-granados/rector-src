<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class SkipBreakInLoop
{
    public function run($values)
    {
        foreach ($values as $value) {
            if ($value) {
                break;
            } else {
                echo 'processing';
            }
            echo 'after if';
        }
    }
}

?>
