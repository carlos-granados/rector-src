<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function inTernary(bool $condition, string $path)
{
    return $condition ? dirname(dirname($path)) : $path;
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function inTernary(bool $condition, string $path)
{
    return $condition ? dirname($path, 2) : $path;
}

?>
