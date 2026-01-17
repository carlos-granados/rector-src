<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function inClosure()
{
    $callback = function () {
        return rand(1, 100);
    };
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function inClosure()
{
    $callback = function () {
        return random_int(1, 100);
    };
}

?>
