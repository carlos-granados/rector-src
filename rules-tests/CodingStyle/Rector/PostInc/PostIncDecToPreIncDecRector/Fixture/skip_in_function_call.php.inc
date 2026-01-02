<?php

namespace Rector\Tests\CodingStyle\Rector\PostInc\PostIncDecToPreIncDecRector\Fixture;

class SkipInFunctionCall
{
    public function run($value = 1)
    {
        // Post-increment in function call has different semantics
        echo sprintf('%d', $value++);
        echo sprintf('%d', $value--);
    }
}

?>
