<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\FlipTypeControlToUseExclusiveTypeRector\Fixture;

use stdClass;

final class TernaryWithNullCheck
{
    public function run(?stdClass $stdClass)
    {
        return $stdClass === null ? 'empty' : 'filled';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\FlipTypeControlToUseExclusiveTypeRector\Fixture;

use stdClass;

final class TernaryWithNullCheck
{
    public function run(?stdClass $stdClass)
    {
        return !$stdClass instanceof \stdClass ? 'empty' : 'filled';
    }
}

?>
