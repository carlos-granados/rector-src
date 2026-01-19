<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

function skipNullValue()
{
    $value = null;
    $value[] = 1;
    return $value;
}

?>
