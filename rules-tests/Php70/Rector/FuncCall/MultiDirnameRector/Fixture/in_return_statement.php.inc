<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function inReturnStatement(string $path)
{
    return dirname(dirname($path));
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function inReturnStatement(string $path)
{
    return dirname($path, 2);
}

?>
