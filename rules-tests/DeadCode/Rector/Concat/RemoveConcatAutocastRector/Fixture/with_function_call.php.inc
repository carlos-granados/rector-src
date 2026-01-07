<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class WithFunctionCall
{
    public function run()
    {
        return 'Time: ' . (string) time();
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class WithFunctionCall
{
    public function run()
    {
        return 'Time: ' . time();
    }
}

?>
