<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToNewRector\Fixture;

class NoArguments
{
    public function run()
    {
        $array = collection();
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToNewRector\Fixture;

class NoArguments
{
    public function run()
    {
        $array = new \Collection();
    }
}

?>
