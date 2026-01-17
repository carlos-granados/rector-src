<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function withDirConstant()
{
    $rootDir = dirname(dirname(__DIR__));
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function withDirConstant()
{
    $rootDir = dirname(__DIR__, 2);
}

?>
