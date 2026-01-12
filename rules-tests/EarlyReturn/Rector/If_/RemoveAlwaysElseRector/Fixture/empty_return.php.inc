<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class EmptyReturn
{
    public function run($value): void
    {
        if ($value) {
            return;
        } else {
            echo 'processing';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class EmptyReturn
{
    public function run($value): void
    {
        if ($value) {
            return;
        }
        echo 'processing';
    }
}

?>
