<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function randWithVariables(int $min, int $max)
{
    return rand($min, $max);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function randWithVariables(int $min, int $max)
{
    return random_int($min, $max);
}

?>
