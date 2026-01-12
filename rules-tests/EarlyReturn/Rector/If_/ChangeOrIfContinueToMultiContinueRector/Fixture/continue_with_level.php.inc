<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeOrIfContinueToMultiContinueRector\Fixture;

class ContinueWithLevel
{
    public function run()
    {
        foreach ($items as $item) {
            foreach ($item->children as $child) {
                if ($child->isValid() || $child->isEnabled()) {
                    continue 2;
                }
                process($child);
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeOrIfContinueToMultiContinueRector\Fixture;

class ContinueWithLevel
{
    public function run()
    {
        foreach ($items as $item) {
            foreach ($item->children as $child) {
                if ($child->isValid()) {
                    continue 2;
                }
                if ($child->isEnabled()) {
                    continue 2;
                }
                process($child);
            }
        }
    }
}

?>
