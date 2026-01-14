<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class InFunctionArgument
{
    public function run()
    {
        return require_once dirname(__FILE__) . '/bootstrap.php';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class InFunctionArgument
{
    public function run()
    {
        return require_once __DIR__ . '/bootstrap.php';
    }
}

?>
