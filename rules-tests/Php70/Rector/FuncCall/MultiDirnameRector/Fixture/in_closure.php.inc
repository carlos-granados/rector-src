<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function inClosure()
{
    $callback = function (string $path) {
        return dirname(dirname($path));
    };
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function inClosure()
{
    $callback = function (string $path) {
        return dirname($path, 2);
    };
}

?>
