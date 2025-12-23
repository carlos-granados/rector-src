<?php

namespace Rector\Tests\CodeQuality\Rector\If_\ShortenElseIfRector\Fixture;

class DeeplyNested
{
    public function run($a, $b, $c, $d)
    {
        if ($a) {
            return 1;
        } else {
            if ($b) {
                return 2;
            } else {
                if ($c) {
                    return 3;
                } else {
                    if ($d) {
                        return 4;
                    }
                }
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\If_\ShortenElseIfRector\Fixture;

class DeeplyNested
{
    public function run($a, $b, $c, $d)
    {
        if ($a) {
            return 1;
        } elseif ($b) {
            return 2;
        } elseif ($c) {
            return 3;
        } elseif ($d) {
            return 4;
        }
    }
}

?>
