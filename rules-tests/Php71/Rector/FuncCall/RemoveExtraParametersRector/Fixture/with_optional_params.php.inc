<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class WithOptionalParams
{
    public function run()
    {
        $this->doSomething(1, 2, 3, 4);
    }

    private function doSomething($a, $b = null, $c = null)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class WithOptionalParams
{
    public function run()
    {
        $this->doSomething(1, 2, 3);
    }

    private function doSomething($a, $b = null, $c = null)
    {
    }
}

?>
