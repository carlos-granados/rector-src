<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class NestedDirname
{
    public function run()
    {
        return dirname(dirname(__FILE__));
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class NestedDirname
{
    public function run()
    {
        return dirname(__DIR__);
    }
}

?>
