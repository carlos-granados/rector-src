<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

function inWhileLoop()
{
    $items = '';
    $i = 0;
    while ($i < 5) {
        $items[] = $i;
        $i++;
    }
    return $items;
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

function inWhileLoop()
{
    $items = [];
    $i = 0;
    while ($i < 5) {
        $items[] = $i;
        $i++;
    }
    return $items;
}

?>
