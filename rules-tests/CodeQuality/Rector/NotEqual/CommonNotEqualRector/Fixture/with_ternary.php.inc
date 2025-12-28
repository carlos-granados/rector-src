<?php

namespace Rector\Tests\CodeQuality\Rector\NotEqual\CommonNotEqualRector\Fixture;

final class WithTernary
{
    public function run($a, $b, $c)
    {
        return $a <> $b ? $c : null;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\NotEqual\CommonNotEqualRector\Fixture;

final class WithTernary
{
    public function run($a, $b, $c)
    {
        return $a != $b ? $c : null;
    }
}

?>
