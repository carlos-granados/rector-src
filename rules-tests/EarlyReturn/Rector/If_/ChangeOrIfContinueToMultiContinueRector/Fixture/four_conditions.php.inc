<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeOrIfContinueToMultiContinueRector\Fixture;

class FourConditions
{
    public function run()
    {
        foreach ($items as $item) {
            if ($item->a() || $item->b() || $item->c() || $item->d()) {
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

class FourConditions
{
    public function run()
    {
        foreach ($items as $item) {
            if ($item->a()) {
                continue;
            }
            if ($item->b()) {
                continue;
            }
            if ($item->c()) {
                continue;
            }
            if ($item->d()) {
                continue;
            }
            process($item);
        }
    }
}

?>
