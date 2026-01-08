<?php

namespace Rector\Tests\DeadCode\Rector\Foreach_\RemoveUnusedForeachKeyRector\Fixture;

final class EmptyForeachBody
{
    public function run()
    {
        $items = [];
        foreach ($items as $key => $value) {
        }
    }
}

-----
<?php

namespace Rector\Tests\DeadCode\Rector\Foreach_\RemoveUnusedForeachKeyRector\Fixture;

final class EmptyForeachBody
{
    public function run()
    {
        $items = [];
        foreach ($items as $value) {
        }
    }
}
