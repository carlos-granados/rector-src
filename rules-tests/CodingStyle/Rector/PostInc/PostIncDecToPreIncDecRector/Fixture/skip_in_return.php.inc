<?php

namespace Rector\Tests\CodingStyle\Rector\PostInc\PostIncDecToPreIncDecRector\Fixture;

class SkipInReturn
{
    public function run($value = 1)
    {
        // Post-increment in return has different semantics
        return $value++;
    }
    
    public function run2($value = 1)
    {
        return $value--;
    }
}

?>
