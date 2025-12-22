<?php

namespace Rector\Tests\CodeQuality\Rector\FunctionLike\SimplifyUselessVariableRector\Fixture;

function withNamedArguments()
{
    $result = sprintf(format: 'Hello %s', values: 'World');
    return $result;
}

function withMixedArguments()
{
    $output = str_replace('a', 'b', subject: 'abc');
    return $output;
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FunctionLike\SimplifyUselessVariableRector\Fixture;

function withNamedArguments()
{
    return sprintf(format: 'Hello %s', values: 'World');
}

function withMixedArguments()
{
    return str_replace('a', 'b', subject: 'abc');
}

?>
