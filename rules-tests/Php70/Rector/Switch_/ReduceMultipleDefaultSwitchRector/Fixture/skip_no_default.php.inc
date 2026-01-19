<?php

namespace Rector\Tests\Php70\Rector\Switch_\ReduceMultipleDefaultSwitchRector\Fixture;

function skipNoDefault($value)
{
    switch ($value) {
        case 1:
            return 'one';
        case 2:
            return 'two';
        case 3:
            return 'three';
    }
}
