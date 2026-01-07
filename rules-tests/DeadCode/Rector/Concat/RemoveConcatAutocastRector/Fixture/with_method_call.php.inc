<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class WithMethodCall
{
    public function run($obj)
    {
        return 'Result: ' . (string) $obj->getValue();
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class WithMethodCall
{
    public function run($obj)
    {
        return 'Result: ' . $obj->getValue();
    }
}

?>
