<?php

namespace Rector\Tests\CodeQuality\Rector\If_\CombineIfRector\Fixture;

class AlreadyCombinedCondition
{
    public function run()
    {
        if ($cond1 && $cond2) {
            if ($cond3) {
                return 'foo';
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\If_\CombineIfRector\Fixture;

class AlreadyCombinedCondition
{
    public function run()
    {
        if ($cond1 && $cond2 && $cond3) {
            return 'foo';
        }
    }
}

?>
