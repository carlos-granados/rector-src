<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class HttpPostVars
{
    public function run()
    {
        $value = $HTTP_POST_VARS['name'];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class HttpPostVars
{
    public function run()
    {
        $value = $_POST['name'];
    }
}

?>
