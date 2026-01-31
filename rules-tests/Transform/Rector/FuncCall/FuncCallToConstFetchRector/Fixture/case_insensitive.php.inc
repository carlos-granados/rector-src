<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToConstFetchRector\Fixture;

class CaseInsensitive
{
    public function run()
    {
        // PHP function names are case-insensitive
        $value = PI();
        $value2 = PHP_SAPI_NAME();
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToConstFetchRector\Fixture;

class CaseInsensitive
{
    public function run()
    {
        // PHP function names are case-insensitive
        $value = M_PI;
        $value2 = PHP_SAPI;
    }
}

?>
