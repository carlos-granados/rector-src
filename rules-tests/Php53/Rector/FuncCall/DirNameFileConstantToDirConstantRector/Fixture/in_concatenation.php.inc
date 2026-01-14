<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class InConcatenation
{
    public function run()
    {
        return dirname(__FILE__) . '/config.php';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class InConcatenation
{
    public function run()
    {
        return __DIR__ . '/config.php';
    }
}

?>
