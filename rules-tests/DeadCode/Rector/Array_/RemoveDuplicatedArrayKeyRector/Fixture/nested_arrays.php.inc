<?php

namespace Rector\Tests\DeadCode\Rector\Array_\RemoveDuplicatedArrayKeyRector\Fixture;

class NestedArrays
{
    public function run()
    {
        $items = [
            'outer' => [
                'inner' => 'A',
                'inner' => 'B',
            ],
            'outer' => [
                'inner' => 'C',
            ],
        ];
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Array_\RemoveDuplicatedArrayKeyRector\Fixture;

class NestedArrays
{
    public function run()
    {
        $items = [
            'outer' => [
                'inner' => 'C',
            ],
        ];
    }
}

?>
