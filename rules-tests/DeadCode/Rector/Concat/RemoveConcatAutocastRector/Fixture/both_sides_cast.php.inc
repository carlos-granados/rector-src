<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class BothSidesCast
{
    public function run($left, $right)
    {
        return (string) $left . (string) $right;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class BothSidesCast
{
    public function run($left, $right)
    {
        return $left . $right;
    }
}

?>
