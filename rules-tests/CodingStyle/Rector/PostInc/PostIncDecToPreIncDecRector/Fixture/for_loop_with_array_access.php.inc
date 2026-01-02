<?php

namespace Rector\Tests\CodingStyle\Rector\PostInc\PostIncDecToPreIncDecRector\Fixture;

class ForLoopWithArrayAccess
{
    public function run()
    {
        // Array access in for loop - should be transformed
        $arr = [];
        for ($i = 0; $i < 10; $arr[$i]++) {
            echo $i;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\PostInc\PostIncDecToPreIncDecRector\Fixture;

class ForLoopWithArrayAccess
{
    public function run()
    {
        // Array access in for loop - should be transformed
        $arr = [];
        for ($i = 0; $i < 10; ++$arr[$i]) {
            echo $i;
        }
    }
}

?>
