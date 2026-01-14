<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class InArrowFunction
{
    public function run()
    {
        $fn = fn() => $HTTP_GET_VARS['id'];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class InArrowFunction
{
    public function run()
    {
        $fn = fn() => $_GET['id'];
    }
}

?>
