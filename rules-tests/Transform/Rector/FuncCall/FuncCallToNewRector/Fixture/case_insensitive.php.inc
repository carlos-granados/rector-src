<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToNewRector\Fixture;

class CaseInsensitive
{
    public function run()
    {
        // PHP function names are case-insensitive
        $array = COLLECTION([]);
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToNewRector\Fixture;

class CaseInsensitive
{
    public function run()
    {
        // PHP function names are case-insensitive
        $array = new \Collection([]);
    }
}

?>
