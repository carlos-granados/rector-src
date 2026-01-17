<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

class InClassMethod
{
    public function compare($first, $second): int
    {
        if ($first === $second) {
            return 0;
        }

        return ($first < $second) ? 1 : -1;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

class InClassMethod
{
    public function compare($first, $second): int
    {
        return $second <=> $first;
    }
}

?>
