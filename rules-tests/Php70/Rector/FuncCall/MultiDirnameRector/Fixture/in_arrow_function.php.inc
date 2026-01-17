<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function inArrowFunction()
{
    $callback = fn (string $path) => dirname(dirname($path));
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function inArrowFunction()
{
    $callback = fn (string $path) => dirname($path, 2);
}

?>
