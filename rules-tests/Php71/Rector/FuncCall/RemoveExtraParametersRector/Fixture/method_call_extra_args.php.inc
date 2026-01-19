<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class MethodCallExtraArgs
{
    public function run()
    {
        $this->doSomething(1, 2, 3);
    }

    private function doSomething($value)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class MethodCallExtraArgs
{
    public function run()
    {
        $this->doSomething(1);
    }

    private function doSomething($value)
    {
    }
}

?>
