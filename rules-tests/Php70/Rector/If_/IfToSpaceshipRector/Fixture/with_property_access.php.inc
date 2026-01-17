<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

class WithPropertyAccess
{
    public function compare($first, $second): int
    {
        if ($first->value === $second->value) {
            return 0;
        }

        return ($first->value < $second->value) ? 1 : -1;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

class WithPropertyAccess
{
    public function compare($first, $second): int
    {
        return $second->value <=> $first->value;
    }
}

?>
