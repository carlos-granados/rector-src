<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

class InClassMethod
{
    public function compare($a, $b): int
    {
        return ($a < $b) ? -1 : (($a > $b) ? 1 : 0);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

class InClassMethod
{
    public function compare($a, $b): int
    {
        return $a <=> $b;
    }
}

?>
