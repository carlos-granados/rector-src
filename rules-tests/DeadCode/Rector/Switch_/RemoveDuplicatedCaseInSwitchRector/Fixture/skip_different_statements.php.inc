<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class SkipDifferentStatements
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
                echo 'processing';
                return 'first';
            case 'b':
                // Different statements
                return 'first';
        }
    }
}
