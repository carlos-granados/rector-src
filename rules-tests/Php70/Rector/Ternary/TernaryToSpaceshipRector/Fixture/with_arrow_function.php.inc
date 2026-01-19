<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

$sort = fn ($a, $b) => ($a < $b) ? -1 : (($a > $b) ? 1 : 0);

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

$sort = fn ($a, $b) => $a <=> $b;

?>
