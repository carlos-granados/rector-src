<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\BinaryOpStandaloneAssignsToDirectRector\Fixture;

final class ClosureExample
{
    public function run()
    {
        $callback = function () {
            $first = 100;
            $second = 200;

            return $first <=> $second;
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\BinaryOpStandaloneAssignsToDirectRector\Fixture;

final class ClosureExample
{
    public function run()
    {
        $callback = function () {
            return 100 <=> 200;
        };
    }
}

?>
