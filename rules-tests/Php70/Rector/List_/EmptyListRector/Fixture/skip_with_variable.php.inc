<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function skipWithVariable()
{
    list($a) = [1];
    list($x, $y, $z) = [1, 2, 3];
}

?>
