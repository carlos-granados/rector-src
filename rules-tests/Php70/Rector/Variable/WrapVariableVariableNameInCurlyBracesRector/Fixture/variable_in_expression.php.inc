<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

function variableInExpression($name)
{
    $result = $$name . 'suffix';
    return $result;
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Variable\WrapVariableVariableNameInCurlyBracesRector\Fixture;

function variableInExpression($name)
{
    $result = ${$name} . 'suffix';
    return $result;
}

?>
