<?php

namespace Rector\Tests\CodeQuality\Rector\NotEqual\CommonNotEqualRector\Fixture;

final class NestedExpressions
{
    public function run($a, $b, $c, $d)
    {
        return ($a <> $b) || ($c <> $d);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\NotEqual\CommonNotEqualRector\Fixture;

final class NestedExpressions
{
    public function run($a, $b, $c, $d)
    {
        return ($a != $b) || ($c != $d);
    }
}

?>
