<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class SkipOneElseifDifferent
{
    public function run($a, $b)
    {
        if ($a) {
            return 1;
        } elseif ($b) {
            return 2;
        } else {
            return 1;
        }
    }
}
