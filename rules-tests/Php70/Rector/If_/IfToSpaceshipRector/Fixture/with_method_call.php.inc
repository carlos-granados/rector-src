<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

class WithMethodCall
{
    public function compare($first, $second): int
    {
        if ($first->getValue() === $second->getValue()) {
            return 0;
        }

        return ($first->getValue() < $second->getValue()) ? 1 : -1;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

class WithMethodCall
{
    public function compare($first, $second): int
    {
        return $second->getValue() <=> $first->getValue();
    }
}

?>
