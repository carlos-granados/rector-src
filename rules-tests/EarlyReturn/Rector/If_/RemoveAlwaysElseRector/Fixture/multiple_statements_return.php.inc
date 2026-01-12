<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class MultipleStatementsReturn
{
    public function run($value)
    {
        if ($value) {
            log('returning early');
            cleanup();
            return 'early';
        } else {
            return 'normal';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class MultipleStatementsReturn
{
    public function run($value)
    {
        if ($value) {
            log('returning early');
            cleanup();
            return 'early';
        }
        return 'normal';
    }
}

?>
