<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

function tripleVariableVariable($name)
{
    $$$name = 'value';
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

function tripleVariableVariable($name)
{
    ${${$name}} = 'value';
}

?>
