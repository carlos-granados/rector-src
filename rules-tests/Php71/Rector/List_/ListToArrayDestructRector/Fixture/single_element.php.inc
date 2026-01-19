<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class SingleElement
{
    public function run()
    {
        list($value) = $data;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class SingleElement
{
    public function run()
    {
        [$value] = $data;
    }
}

?>
