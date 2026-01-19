<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class ListWithKeys
{
    public function run()
    {
        list('first' => $a, 'second' => $b) = $data;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class ListWithKeys
{
    public function run()
    {
        ['first' => $a, 'second' => $b] = $data;
    }
}

?>
