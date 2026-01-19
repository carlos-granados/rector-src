<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

$sort = function ($a, $b) {
    return ($a < $b) ? -1 : (($a > $b) ? 1 : 0);
};

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

$sort = function ($a, $b) {
    return $a <=> $b;
};

?>
