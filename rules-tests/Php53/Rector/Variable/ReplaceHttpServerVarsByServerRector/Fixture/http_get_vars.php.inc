<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class HttpGetVars
{
    public function run()
    {
        $value = $HTTP_GET_VARS['id'];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class HttpGetVars
{
    public function run()
    {
        $value = $_GET['id'];
    }
}

?>
