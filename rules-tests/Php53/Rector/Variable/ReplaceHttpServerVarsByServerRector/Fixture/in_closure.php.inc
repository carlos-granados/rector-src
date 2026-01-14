<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class InClosure
{
    public function run()
    {
        $fn = function () {
            return $HTTP_SERVER_VARS['REQUEST_METHOD'];
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class InClosure
{
    public function run()
    {
        $fn = function () {
            return $_SERVER['REQUEST_METHOD'];
        };
    }
}

?>
