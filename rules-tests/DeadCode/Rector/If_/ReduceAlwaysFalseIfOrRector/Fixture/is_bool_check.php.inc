<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

class IsBoolCheck
{
    public function run(bool $flag)
    {
        if (! is_bool($flag) || $flag === true) {
            return 'yes';
        }

        return 'no';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

class IsBoolCheck
{
    public function run(bool $flag)
    {
        if ($flag === true) {
            return 'yes';
        }

        return 'no';
    }
}

?>
