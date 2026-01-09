<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

class IsFloatCheck
{
    public function run(float $number)
    {
        if (! is_float($number) || $number > 50.5) {
            return 'yes';
        }

        return 'no';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

class IsFloatCheck
{
    public function run(float $number)
    {
        if ($number > 50.5) {
            return 'yes';
        }

        return 'no';
    }
}

?>
