<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

class WithDirnameInMethod
{
    public function getParentDirectory(string $path): string
    {
        return dirname(dirname($path));
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

class WithDirnameInMethod
{
    public function getParentDirectory(string $path): string
    {
        return dirname($path, 2);
    }
}

?>
