<?php

namespace Rector\Tests\CodingStyle\Rector\PostInc\PostIncDecToPreIncDecRector\Fixture;

class SkipInAssignment
{
    public function run($value = 1)
    {
        // Post-increment in assignment has different semantics than pre-increment
        $x = $value++;
        $y = $value--;
    }
}

?>
