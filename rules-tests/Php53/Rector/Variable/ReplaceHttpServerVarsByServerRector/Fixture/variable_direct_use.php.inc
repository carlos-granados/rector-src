<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class VariableDirectUse
{
    public function run()
    {
        $serverVars = $HTTP_SERVER_VARS;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class VariableDirectUse
{
    public function run()
    {
        $serverVars = $_SERVER;
    }
}

?>
