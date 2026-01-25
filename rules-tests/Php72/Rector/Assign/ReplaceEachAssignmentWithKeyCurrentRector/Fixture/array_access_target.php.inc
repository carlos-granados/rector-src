<?php

namespace Rector\Tests\Php72\Rector\Assign\ReplaceEachAssignmentWithKeyCurrentRector\Fixture;

final class ArrayAccessTarget
{
    public function run()
    {
        $items = ['a' => 1, 'b' => 2];
        $results = [];
        $results['first'] = each($items);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php72\Rector\Assign\ReplaceEachAssignmentWithKeyCurrentRector\Fixture;

final class ArrayAccessTarget
{
    public function run()
    {
        $items = ['a' => 1, 'b' => 2];
        $results = [];
        $results['first'][1] = current($items);
        $results['first']['value'] = current($items);
        $results['first'][0] = key($items);
        $results['first']['key'] = key($items);
        next($items);
    }
}

?>
