<?php

namespace Rector\Tests\CodingStyle\Rector\PostInc\PostIncDecToPreIncDecRector\Fixture;

class SkipEmptyForLoop
{
    public function run()
    {
        // Empty for loop expression section
        for ($i = 0; $i < 10; ) {
            ++$i;
        }
    }
}

?>
