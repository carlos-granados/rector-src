<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function noSwapEqualValues()
{
    rand(5, 5);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function noSwapEqualValues()
{
    random_int(5, 5);
}

?>
