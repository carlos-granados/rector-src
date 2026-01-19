<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

function globalVariableVariable($name)
{
    global $$name;
    return $$name;
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

function globalVariableVariable($name)
{
    global ${$name};
    return ${$name};
}

?>
