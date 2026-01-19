<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

function skipTypedArrayParam(array $items)
{
    $items[] = 'new';
    return $items;
}

?>
