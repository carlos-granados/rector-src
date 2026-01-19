<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

function variableAsFunctionArg($name)
{
    return strlen($$name);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

function variableAsFunctionArg($name)
{
    return strlen(${$name});
}

?>
