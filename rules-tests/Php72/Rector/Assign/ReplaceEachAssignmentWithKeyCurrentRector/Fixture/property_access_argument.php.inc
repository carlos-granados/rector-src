<?php

namespace Rector\Tests\Php72\Rector\Assign\ReplaceEachAssignmentWithKeyCurrentRector\Fixture;

final class PropertyAccessArgument
{
    private array $items = ['a' => 1, 'b' => 2];

    public function run()
    {
        $result = each($this->items);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php72\Rector\Assign\ReplaceEachAssignmentWithKeyCurrentRector\Fixture;

final class PropertyAccessArgument
{
    private array $items = ['a' => 1, 'b' => 2];

    public function run()
    {
        $result[1] = current($this->items);
        $result['value'] = current($this->items);
        $result[0] = key($this->items);
        $result['key'] = key($this->items);
        next($this->items);
    }
}

?>
