<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class SkipNoTerminatingStatement
{
    public function run($value)
    {
        if ($value) {
            echo 'something';
        } else {
            echo 'else';
        }

        return 'done';
    }
}

?>
