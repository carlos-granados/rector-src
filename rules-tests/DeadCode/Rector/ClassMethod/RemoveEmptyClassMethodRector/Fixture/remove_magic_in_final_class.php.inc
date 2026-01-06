<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveEmptyClassMethodRector\Fixture;

final class RemoveMagicInFinalClass
{
    public function __destruct()
    {
    }

    private function helper()
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveEmptyClassMethodRector\Fixture;

final class RemoveMagicInFinalClass
{
}

?>
