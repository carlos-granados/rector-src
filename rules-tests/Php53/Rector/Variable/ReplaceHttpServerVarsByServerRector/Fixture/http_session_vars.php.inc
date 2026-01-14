<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class HttpSessionVars
{
    public function run()
    {
        $user = $HTTP_SESSION_VARS['user_id'];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class HttpSessionVars
{
    public function run()
    {
        $user = $_SESSION['user_id'];
    }
}

?>
