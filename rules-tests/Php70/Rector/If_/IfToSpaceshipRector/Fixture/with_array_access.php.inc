<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

function withArrayAccess($first, $second)
{
    if ($first['key'] === $second['key']) {
        return 0;
    }

    return ($first['key'] < $second['key']) ? 1 : -1;
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

function withArrayAccess($first, $second)
{
    return $second['key'] <=> $first['key'];
}

?>
