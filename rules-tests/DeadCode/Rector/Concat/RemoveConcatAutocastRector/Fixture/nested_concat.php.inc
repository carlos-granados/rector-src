<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class NestedConcat
{
    public function run($a, $b, $c)
    {
        return (string) ($a . $b) . $c;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class NestedConcat
{
    public function run($a, $b, $c)
    {
        return ($a . $b) . $c;
    }
}

?>
