<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class ListFromFunctionCall
{
    public function run()
    {
        list($a, $b) = getData();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class ListFromFunctionCall
{
    public function run()
    {
        [$a, $b] = getData();
    }
}

?>
