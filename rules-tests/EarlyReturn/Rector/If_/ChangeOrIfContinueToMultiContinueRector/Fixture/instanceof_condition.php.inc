<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeOrIfContinueToMultiContinueRector\Fixture;

class InstanceofCondition
{
    public function run()
    {
        foreach ($items as $item) {
            if ($item instanceof \Exception || $item instanceof \Error) {
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

class InstanceofCondition
{
    public function run()
    {
        foreach ($items as $item) {
            if ($item instanceof \Exception) {
                continue;
            }
            if ($item instanceof \Error) {
                continue;
            }
            process($item);
        }
    }
}

?>
