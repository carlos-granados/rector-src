<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToNewRector\Fixture;

class MultipleArguments
{
    public function run()
    {
        $array = collection([1, 2, 3], true, 'key');
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToNewRector\Fixture;

class MultipleArguments
{
    public function run()
    {
        $array = new \Collection([1, 2, 3], true, 'key');
    }
}

?>
