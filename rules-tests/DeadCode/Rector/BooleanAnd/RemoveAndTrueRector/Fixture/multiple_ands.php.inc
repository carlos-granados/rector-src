<?php

namespace Rector\Tests\DeadCode\Rector\BooleanAnd\RemoveAndTrueRector\Fixture;

class MultipleAnds
{
    public function run()
    {
        $result = true && $a && true && $b && true;
        $result2 = true && true && true && $x;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\BooleanAnd\RemoveAndTrueRector\Fixture;

class MultipleAnds
{
    public function run()
    {
        $result = $a && $b;
        $result2 = $x;
    }
}

?>
