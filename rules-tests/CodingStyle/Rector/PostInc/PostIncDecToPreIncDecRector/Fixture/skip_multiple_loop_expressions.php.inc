<?php

namespace Rector\Tests\CodingStyle\Rector\PostInc\PostIncDecToPreIncDecRector\Fixture;

class SkipMultipleLoopExpressions
{
    public function run()
    {
        // Multiple loop expressions should not be transformed
        for ($i = 0, $j = 0; $i < 10; $i++, $j++) {
            echo $i . $j;
        }
    }
}

?>
