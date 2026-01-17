<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function mixedLevels()
{
    $path = dirname(dirname(dirname($file, 2), 3));
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function mixedLevels()
{
    $path = dirname($file, 6);
}

?>
