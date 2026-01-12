<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeOrIfContinueToMultiContinueRector\Fixture;

class SkipOrAndMixed
{
    public function run()
    {
        foreach ($items as $item) {
            if (($item->isValid() && $item->isActive()) || $item->isEnabled()) {
                continue;
            }
            process($item);
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeOrIfContinueToMultiContinueRector\Fixture;

class SkipOrAndMixed
{
    public function run()
    {
        foreach ($items as $item) {
            if ($item->isValid() && $item->isActive()) {
                continue;
            }
            if ($item->isEnabled()) {
                continue;
            }
            process($item);
        }
    }
}

?>
