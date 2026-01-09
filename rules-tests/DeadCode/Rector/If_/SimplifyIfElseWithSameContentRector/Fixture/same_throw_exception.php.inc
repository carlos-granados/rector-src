<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class SameThrowException
{
    public function run($condition)
    {
        if ($condition) {
            throw new \RuntimeException('Error');
        } else {
            throw new \RuntimeException('Error');
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class SameThrowException
{
    public function run($condition)
    {
        throw new \RuntimeException('Error');
    }
}

?>
