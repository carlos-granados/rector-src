<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function skipWithKeys()
{
    list('first' => $a, 'second' => $b) = ['first' => 1, 'second' => 2];
}

?>
