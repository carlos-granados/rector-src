<?php

namespace Rector\Tests\DeadCode\Rector\BooleanAnd\RemoveAndTrueRector\Fixture;

class NestedBooleanAnd
{
    public function run()
    {
        $result = (true && true) && $x;
        $result2 = $x && (true && true);
        $result3 = (true && $a) && (true && $b);
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\BooleanAnd\RemoveAndTrueRector\Fixture;

class NestedBooleanAnd
{
    public function run()
    {
        $result = $x;
        $result2 = $x;
        $result3 = ($a) && ($b);
    }
}

?>
