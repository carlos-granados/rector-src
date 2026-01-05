<?php

namespace Rector\Tests\DeadCode\Rector\Array_\RemoveDuplicatedArrayKeyRector\Fixture;

class StringKeys
{
    public function run()
    {
        $items = [
            'foo' => 'A',
            'bar' => 'B',
            'foo' => 'C',
        ];
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Array_\RemoveDuplicatedArrayKeyRector\Fixture;

class StringKeys
{
    public function run()
    {
        $items = [
            'bar' => 'B',
            'foo' => 'C',
        ];
    }
}

?>
