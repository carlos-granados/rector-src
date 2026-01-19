<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class InArrowFunction
{
    public function run()
    {
        $fn = fn($data) => (function() use ($data) {
            list($id, $name) = $data;
            return $id . $name;
        })();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class InArrowFunction
{
    public function run()
    {
        $fn = fn($data) => (function() use ($data) {
            [$id, $name] = $data;
            return $id . $name;
        })();
    }
}

?>
