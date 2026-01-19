<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

function skipNonEmptyString()
{
    $string = 'hello';
    $string[] = 'a';
    return $string;
}

?>
