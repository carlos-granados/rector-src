<?php

namespace Rector\Tests\CodeQuality\Rector\NotEqual\CommonNotEqualRector\Fixture;

final class MultipleNotEqual
{
    public function run($a, $b, $c, $d)
    {
        if ($a <> $b && $c <> $d) {
            return true;
        }
        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\NotEqual\CommonNotEqualRector\Fixture;

final class MultipleNotEqual
{
    public function run($a, $b, $c, $d)
    {
        if ($a != $b && $c != $d) {
            return true;
        }
        return false;
    }
}

?>
