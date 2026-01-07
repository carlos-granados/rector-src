<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class MultipleChained
{
    public function run($b, $d)
    {
        return 'a' . (string) $b . 'c' . (string) $d;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Concat\RemoveConcatAutocastRector\Fixture;

class MultipleChained
{
    public function run($b, $d)
    {
        return 'a' . $b . 'c' . $d;
    }
}

?>
