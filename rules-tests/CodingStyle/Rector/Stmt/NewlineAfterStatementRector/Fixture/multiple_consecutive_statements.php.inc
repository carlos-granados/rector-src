<?php

namespace Rector\Tests\CodingStyle\Rector\Stmt\NewlineAfterStatementRector\Fixture;

class MultipleConsecutiveStatements
{
    public function run()
    {
        if (true) {
            echo 'test';
        }
        while (true) {
            break;
        }
        for ($i = 0; $i < 10; $i++) {
            echo $i;
        }
        return true;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Stmt\NewlineAfterStatementRector\Fixture;

class MultipleConsecutiveStatements
{
    public function run()
    {
        if (true) {
            echo 'test';
        }

        while (true) {
            break;
        }

        for ($i = 0; $i < 10; $i++) {
            echo $i;
        }

        return true;
    }
}

?>
