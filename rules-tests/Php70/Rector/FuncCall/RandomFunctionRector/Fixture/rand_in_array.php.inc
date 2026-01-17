<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function randInArray()
{
    $numbers = [rand(1, 10), rand(11, 20), rand(21, 30)];
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function randInArray()
{
    $numbers = [random_int(1, 10), random_int(11, 20), random_int(21, 30)];
}

?>
