<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeOrIfContinueToMultiContinueRector\Fixture;

class InForLoop
{
    public function run()
    {
        for ($i = 0; $i < 10; $i++) {
            if ($i === 0 || $i === 5) {
                continue;
            }
            echo $i;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeOrIfContinueToMultiContinueRector\Fixture;

class InForLoop
{
    public function run()
    {
        for ($i = 0; $i < 10; $i++) {
            if ($i === 0) {
                continue;
            }
            if ($i === 5) {
                continue;
            }
            echo $i;
        }
    }
}

?>
