<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

function skipStringVariableName()
{
    ${"name"} = 'value';
    return ${"name"};
}

?>
