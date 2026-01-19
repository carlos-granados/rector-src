<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

function variableInArray($name)
{
    return [$$name, $$name];
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

function variableInArray($name)
{
    return [${$name}, ${$name}];
}

?>
