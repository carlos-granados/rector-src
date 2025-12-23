<?php

namespace Rector\Tests\CodeQuality\Rector\If_\ShortenElseIfRector\Fixture;

class NestedElseWithElseIf
{
    public function run($a, $b, $c)
    {
        if ($a) {
            return 1;
        } else {
            if ($b) {
                return 2;
            } elseif ($c) {
                return 3;
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\If_\ShortenElseIfRector\Fixture;

class NestedElseWithElseIf
{
    public function run($a, $b, $c)
    {
        if ($a) {
            return 1;
        } elseif ($b) {
            return 2;
        } elseif ($c) {
            return 3;
        }
    }
}

?>
