<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class BreakZeroInDoWhile
{
    public function run()
    {
        $i = 0;
        do {
            if ($i === 5) {
                break 0;
            }
            $i++;
        } while ($i < 10);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

class BreakZeroInDoWhile
{
    public function run()
    {
        $i = 0;
        do {
            if ($i === 5) {
                break;
            }
            $i++;
        } while ($i < 10);
    }
}

?>
