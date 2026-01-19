<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class ForeachWithKey
{
    public function run()
    {
        foreach ($data as $key => list($id, $name)) {
            echo $key . $id . $name;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class ForeachWithKey
{
    public function run()
    {
        foreach ($data as $key => [$id, $name]) {
            echo $key . $id . $name;
        }
    }
}

?>
