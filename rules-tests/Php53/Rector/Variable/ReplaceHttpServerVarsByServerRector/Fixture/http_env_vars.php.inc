<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class HttpEnvVars
{
    public function run()
    {
        $value = $HTTP_ENV_VARS['PATH'];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class HttpEnvVars
{
    public function run()
    {
        $value = $_ENV['PATH'];
    }
}

?>
