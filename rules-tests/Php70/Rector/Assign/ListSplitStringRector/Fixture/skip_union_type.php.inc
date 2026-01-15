<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

function getStringOrArray(): string|array
{
    return 'abcde';
}

list($a, $b) = getStringOrArray();

