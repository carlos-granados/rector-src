<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class RightSideOnly
{
    public function run($value)
    {
        return 'prefix ' . (string) $value;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class RightSideOnly
{
    public function run($value)
    {
        return 'prefix ' . $value;
    }
}

?>
