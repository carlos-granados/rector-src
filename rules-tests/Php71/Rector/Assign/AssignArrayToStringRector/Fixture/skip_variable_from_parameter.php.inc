<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

function skipVariableFromParameter(string $value)
{
    $value[] = 'a';
    return $value;
}

?>
