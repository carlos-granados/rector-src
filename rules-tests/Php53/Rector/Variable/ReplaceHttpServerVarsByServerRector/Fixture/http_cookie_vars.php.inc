<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class HttpCookieVars
{
    public function run()
    {
        $value = $HTTP_COOKIE_VARS['session_id'];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class HttpCookieVars
{
    public function run()
    {
        $value = $_COOKIE['session_id'];
    }
}

?>
