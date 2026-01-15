<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class ContinueZeroInFor
{
    public function run()
    {
        for ($i = 0; $i < 10; $i++) {
            if ($i === 5) {
                continue 0;
            }
            echo $i;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class ContinueZeroInFor
{
    public function run()
    {
        for ($i = 0; $i < 10; $i++) {
            if ($i === 5) {
                continue;
            }
            echo $i;
        }
    }
}

?>
