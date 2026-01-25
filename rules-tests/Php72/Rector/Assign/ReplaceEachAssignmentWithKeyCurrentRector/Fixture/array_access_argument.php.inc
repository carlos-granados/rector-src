<?php

namespace Rector\Tests\Php72\Rector\Assign\ReplaceEachAssignmentWithKeyCurrentRector\Fixture;

final class ArrayAccessArgument
{
    public function run()
    {
        $items = [
            'first' => ['a' => 1, 'b' => 2],
        ];
        $result = each($items['first']);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php72\Rector\Assign\ReplaceEachAssignmentWithKeyCurrentRector\Fixture;

final class ArrayAccessArgument
{
    public function run()
    {
        $items = [
            'first' => ['a' => 1, 'b' => 2],
        ];
        $result[1] = current($items['first']);
        $result['value'] = current($items['first']);
        $result[0] = key($items['first']);
        $result['key'] = key($items['first']);
        next($items['first']);
    }
}

?>
