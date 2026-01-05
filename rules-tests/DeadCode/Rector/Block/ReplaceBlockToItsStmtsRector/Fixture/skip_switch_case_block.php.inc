<?php

namespace Rector\Tests\DeadCode\Rector\Block\ReplaceBlockToItsStmtsRector\Fixture;

function skipSwitchCaseBlock($value)
{
    switch ($value) {
        case 1:
            echo "one";
            break;
        case 2:
            echo "two";
            break;
    }
}
