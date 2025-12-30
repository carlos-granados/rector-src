<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\SplitDoubleAssignRector\Fixture;

class TripleAssign
{
    public function run()
    {
        $one = $two = $three = 1;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\SplitDoubleAssignRector\Fixture;

class TripleAssign
{
    public function run()
    {
        $one = 1;
        $two = 1;
        $three = 1;
    }
}

?>
