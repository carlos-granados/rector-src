<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function fourLevels()
{
    $path = dirname(dirname(dirname(dirname($file))));
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function fourLevels()
{
    $path = dirname($file, 4);
}

?>
