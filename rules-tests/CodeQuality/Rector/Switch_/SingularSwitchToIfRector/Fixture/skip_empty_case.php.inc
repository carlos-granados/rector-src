<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SingularSwitchToIfRector\Fixture;

class SkipEmptyCase
{
    public function run($value)
    {
        $result = 0;
        switch ($value) {
            case 100:
                // empty case
        }

        return $result;
    }
}

?>
