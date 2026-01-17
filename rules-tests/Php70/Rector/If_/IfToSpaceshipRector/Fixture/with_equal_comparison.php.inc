<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

function withEqualComparison($first, $second)
{
    if ($first == $second) {
        return 0;
    }

    return ($first < $second) ? 1 : -1;
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

function withEqualComparison($first, $second)
{
    return $second <=> $first;
}

?>
