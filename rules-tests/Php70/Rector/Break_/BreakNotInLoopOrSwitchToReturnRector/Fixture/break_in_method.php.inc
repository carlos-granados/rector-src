<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

class BreakInMethod
{
    public function process(bool $condition)
    {
        if ($condition) {
            break;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

class BreakInMethod
{
    public function process(bool $condition)
    {
        if ($condition) {
            return;
        }
    }
}

?>
