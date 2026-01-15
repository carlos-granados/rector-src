<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

function getMixed(): mixed
{
    return 'abcde';
}

list($a, $b) = getMixed();

