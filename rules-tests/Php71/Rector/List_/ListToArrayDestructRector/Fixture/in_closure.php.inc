<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class InClosure
{
    public function run()
    {
        $closure = function ($data) {
            list($id, $name) = $data;
            return $id . $name;
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class InClosure
{
    public function run()
    {
        $closure = function ($data) {
            [$id, $name] = $data;
            return $id . $name;
        };
    }
}

?>
