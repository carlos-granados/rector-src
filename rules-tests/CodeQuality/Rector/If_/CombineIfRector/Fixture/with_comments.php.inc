<?php

namespace Rector\Tests\CodeQuality\Rector\If_\CombineIfRector\Fixture;

class WithComments
{
    public function run()
    {
        // Outer check
        if ($cond1) {
            // Inner check
            if ($cond2) {
                return 'foo';
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\If_\CombineIfRector\Fixture;

class WithComments
{
    public function run()
    {
        // Outer check
        // Inner check
        if ($cond1 && $cond2) {
            return 'foo';
        }
    }
}

?>
