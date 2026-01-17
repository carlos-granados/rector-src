<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function inArrowFunction()
{
    $callback = fn () => rand(1, 100);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function inArrowFunction()
{
    $callback = fn () => random_int(1, 100);
}

?>
