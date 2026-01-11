<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class SkipThrowStatement
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
                throw new \InvalidArgumentException('Invalid');
            case 'b':
                throw new \InvalidArgumentException('Invalid');
        }
    }
}
