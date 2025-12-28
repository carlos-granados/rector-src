<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SingularSwitchToIfRector\Fixture;

class SkipMultipleCases
{
    public function run($value)
    {
        $result = 0;
        switch ($value) {
            case 100:
                $result = 1000;
                break;
            case 200:
                $result = 2000;
                break;
        }

        return $result;
    }
}
