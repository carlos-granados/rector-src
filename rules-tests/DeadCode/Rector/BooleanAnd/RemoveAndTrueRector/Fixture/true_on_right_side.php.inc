<?php

namespace Rector\Tests\DeadCode\Rector\BooleanAnd\RemoveAndTrueRector\Fixture;

class TrueOnRightSide
{
    public function run()
    {
        $result = 5 === 1 && true;
        $result2 = $this->check() && true;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\BooleanAnd\RemoveAndTrueRector\Fixture;

class TrueOnRightSide
{
    public function run()
    {
        $result = 5 === 1;
        $result2 = $this->check();
    }
}

?>
