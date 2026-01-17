<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function randInTernary(bool $condition)
{
    return $condition ? rand(1, 10) : rand(11, 20);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function randInTernary(bool $condition)
{
    return $condition ? random_int(1, 10) : random_int(11, 20);
}

?>
