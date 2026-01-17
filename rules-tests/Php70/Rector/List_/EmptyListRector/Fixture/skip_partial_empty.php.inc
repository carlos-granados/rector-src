<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function skipPartialEmpty()
{
    list($a, , $b) = [1, 2, 3];
    list(, $c) = [1, 2];
}

?>
