<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

function skipRegularVariable($name)
{
    $name = 'value';
    return $name;
}

?>
