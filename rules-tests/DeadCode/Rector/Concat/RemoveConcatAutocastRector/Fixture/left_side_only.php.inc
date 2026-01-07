<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class LeftSideOnly
{
    public function run($value)
    {
        return (string) $value . ' suffix';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class LeftSideOnly
{
    public function run($value)
    {
        return $value . ' suffix';
    }
}

?>
