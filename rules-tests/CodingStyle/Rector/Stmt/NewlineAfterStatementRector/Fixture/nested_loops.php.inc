<?php

namespace Rector\Tests\CodingStyle\Rector\Stmt\NewlineAfterStatementRector\Fixture;

class NestedLoops
{
    public function run()
    {
        for ($i = 0; $i < 10; $i++) {
            echo $i;
        }
        foreach ([1, 2, 3] as $value) {
            echo $value;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Stmt\NewlineAfterStatementRector\Fixture;

class NestedLoops
{
    public function run()
    {
        for ($i = 0; $i < 10; $i++) {
            echo $i;
        }

        foreach ([1, 2, 3] as $value) {
            echo $value;
        }
    }
}

?>
