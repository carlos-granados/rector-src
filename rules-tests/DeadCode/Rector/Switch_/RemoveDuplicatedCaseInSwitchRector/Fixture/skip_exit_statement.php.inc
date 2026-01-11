<?php

namespace Rector\Tests\DeadCode\Rector\Switch_\RemoveDuplicatedCaseInSwitchRector\Fixture;

class SkipExitStatement
{
    public function run($value)
    {
        switch ($value) {
            case 'a':
                echo 'a';
                exit(1);
            case 'b':
                echo 'a';
                exit(1);
        }
    }
}
