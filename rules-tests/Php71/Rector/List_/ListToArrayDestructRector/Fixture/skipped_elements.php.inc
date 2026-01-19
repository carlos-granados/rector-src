<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class SkippedElements
{
    public function run()
    {
        list($a, , $c) = $data;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class SkippedElements
{
    public function run()
    {
        [$a, , $c] = $data;
    }
}

?>
