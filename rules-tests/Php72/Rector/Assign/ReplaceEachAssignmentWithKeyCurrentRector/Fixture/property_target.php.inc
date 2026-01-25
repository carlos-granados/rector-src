<?php

namespace Rector\Tests\Php72\Rector\Assign\ReplaceEachAssignmentWithKeyCurrentRector\Fixture;

final class PropertyTarget
{
    private $result;

    public function run()
    {
        $items = ['a' => 1, 'b' => 2];
        $this->result = each($items);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php72\Rector\Assign\ReplaceEachAssignmentWithKeyCurrentRector\Fixture;

final class PropertyTarget
{
    private $result;

    public function run()
    {
        $items = ['a' => 1, 'b' => 2];
        $this->result[1] = current($items);
        $this->result['value'] = current($items);
        $this->result[0] = key($items);
        $this->result['key'] = key($items);
        next($items);
    }
}

?>
