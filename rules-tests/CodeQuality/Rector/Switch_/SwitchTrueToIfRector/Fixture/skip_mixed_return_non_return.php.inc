<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SwitchTrueToIfRector\Fixture;

class SkipMixedReturnNonReturn
{
    public function run()
    {
        switch (true) {
            case $value === 0:
                return 'zero';
            case $value === 1:
                echo 'one';
                break;
        }
    }
}
