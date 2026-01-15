<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class BreakZeroInWhile
{
    public function run()
    {
        $i = 0;
        while ($i < 10) {
            if ($i === 5) {
                break 0;
            }
            $i++;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class BreakZeroInWhile
{
    public function run()
    {
        $i = 0;
        while ($i < 10) {
            if ($i === 5) {
                break;
            }
            $i++;
        }
    }
}

?>
