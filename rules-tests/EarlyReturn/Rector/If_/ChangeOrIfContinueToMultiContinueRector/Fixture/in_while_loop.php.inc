<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeOrIfContinueToMultiContinueRector\Fixture;

class InWhileLoop
{
    public function run()
    {
        while ($item = getNext()) {
            if ($item->isValid() || $item->isEnabled()) {
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

class InWhileLoop
{
    public function run()
    {
        while ($item = getNext()) {
            if ($item->isValid()) {
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
