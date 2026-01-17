<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function swapPositiveValues()
{
    rand(100, 1);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function swapPositiveValues()
{
    random_int(1, 100);
}

?>
