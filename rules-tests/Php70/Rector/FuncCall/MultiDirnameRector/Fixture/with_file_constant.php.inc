<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function withFileConstant()
{
    $rootDir = dirname(dirname(__FILE__));
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function withFileConstant()
{
    $rootDir = dirname(__FILE__, 2);
}

?>
