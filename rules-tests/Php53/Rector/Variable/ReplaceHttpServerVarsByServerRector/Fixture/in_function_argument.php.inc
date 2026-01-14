<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class InFunctionArgument
{
    public function run()
    {
        someFunction($HTTP_POST_VARS);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class InFunctionArgument
{
    public function run()
    {
        someFunction($_POST);
    }
}

?>
