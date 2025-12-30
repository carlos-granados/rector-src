<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\BinaryOpStandaloneAssignsToDirectRector\Fixture;

final class FirstClassCallable
{
    public function run()
    {
        $first = strlen(...);
        $second = strtolower(...);

        return $first <=> $second;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\BinaryOpStandaloneAssignsToDirectRector\Fixture;

final class FirstClassCallable
{
    public function run()
    {
        return strlen(...) <=> strtolower(...);
    }
}

?>
