<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class MultipleVarsInMethod
{
    public function run()
    {
        $server = $HTTP_SERVER_VARS['SERVER_NAME'];
        $query = $HTTP_GET_VARS['q'];
        $post = $HTTP_POST_VARS['data'];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class MultipleVarsInMethod
{
    public function run()
    {
        $server = $_SERVER['SERVER_NAME'];
        $query = $_GET['q'];
        $post = $_POST['data'];
    }
}

?>
