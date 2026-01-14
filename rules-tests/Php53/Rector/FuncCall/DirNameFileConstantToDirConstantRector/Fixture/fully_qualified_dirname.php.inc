<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class FullyQualifiedDirname
{
    public function run()
    {
        return \dirname(__FILE__);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class FullyQualifiedDirname
{
    public function run()
    {
        return __DIR__;
    }
}

?>
