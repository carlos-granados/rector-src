<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

function withArrayAccess(array $a, array $b): int
{
    return ($a['key'] < $b['key']) ? -1 : (($a['key'] > $b['key']) ? 1 : 0);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

function withArrayAccess(array $a, array $b): int
{
    return $a['key'] <=> $b['key'];
}

?>
