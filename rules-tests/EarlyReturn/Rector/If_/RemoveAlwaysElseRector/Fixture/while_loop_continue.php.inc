<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class WhileLoopContinue
{
    public function run($values)
    {
        $i = 0;
        while ($i < count($values)) {
            if ($values[$i] === null) {
                $i++;
                continue;
            } else {
                process($values[$i]);
            }
            $i++;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\RemoveAlwaysElseRector\Fixture;

class WhileLoopContinue
{
    public function run($values)
    {
        $i = 0;
        while ($i < count($values)) {
            if ($values[$i] === null) {
                $i++;
                continue;
            }
            process($values[$i]);
            $i++;
        }
    }
}

?>
