<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

function skipIntegerValue()
{
    $value = 0;
    $value[] = 1;
    return $value;
}

?>
