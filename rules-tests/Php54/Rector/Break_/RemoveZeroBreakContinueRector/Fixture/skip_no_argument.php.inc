<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class SkipNoArgument
{
    public function run(array $items)
    {
        foreach ($items as $item) {
            if ($item === 'stop') {
                break;
            }
            if ($item === 'skip') {
                continue;
            }
            echo $item;
        }
    }
}

?>
