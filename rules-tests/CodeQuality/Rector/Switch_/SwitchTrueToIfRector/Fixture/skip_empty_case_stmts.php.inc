<?php

namespace Rector\Tests\CodeQuality\Rector\Switch_\SwitchTrueToIfRector\Fixture;

class SkipEmptyCaseStmts
{
    public function run()
    {
        switch (true) {
            case $value === 0:
                // empty case
            case $value === 1:
                return 'yes';
        }
    }
}
