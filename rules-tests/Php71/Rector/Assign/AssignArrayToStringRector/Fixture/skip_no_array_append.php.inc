<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

function skipNoArrayAppend()
{
    $string = '';
    $string = 'hello';
    return $string;
}

?>
