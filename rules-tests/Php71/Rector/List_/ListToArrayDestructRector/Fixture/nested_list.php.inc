<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class NestedList
{
    public function run()
    {
        list($a, list($b, $c)) = $data;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class NestedList
{
    public function run()
    {
        [$a, list($b, $c)] = $data;
    }
}

?>
