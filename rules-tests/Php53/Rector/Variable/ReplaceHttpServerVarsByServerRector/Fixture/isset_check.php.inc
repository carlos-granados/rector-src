<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class IssetCheck
{
    public function run()
    {
        if (isset($HTTP_GET_VARS['id'])) {
            return $HTTP_GET_VARS['id'];
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class IssetCheck
{
    public function run()
    {
        if (isset($_GET['id'])) {
            return $_GET['id'];
        }
    }
}

?>
