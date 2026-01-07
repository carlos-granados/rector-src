<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class WithTernary
{
    public function run($a, $b, $c)
    {
        return 'Value: ' . (string) ($a ? $b : $c);
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class WithTernary
{
    public function run($a, $b, $c)
    {
        return 'Value: ' . ($a ? $b : $c);
    }
}

?>
