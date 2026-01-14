<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class HttpPostFiles
{
    public function run()
    {
        $file = $HTTP_POST_FILES['upload'];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class HttpPostFiles
{
    public function run()
    {
        $file = $_FILES['upload'];
    }
}

?>
