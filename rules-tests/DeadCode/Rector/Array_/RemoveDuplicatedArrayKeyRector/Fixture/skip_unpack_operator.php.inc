<?php

namespace Rector\Tests\DeadCode\Rector\Array_\RemoveDuplicatedArrayKeyRector\Fixture;

class SkipUnpackOperator
{
    public function run()
    {
        $arr = ['key' => 'from_unpack'];

        $items = [
            ...$arr,
            'key' => 'A',
            'key' => 'B',
        ];
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Array_\RemoveDuplicatedArrayKeyRector\Fixture;

class SkipUnpackOperator
{
    public function run()
    {
        $arr = ['key' => 'from_unpack'];

        $items = [
            ...$arr,
            'key' => 'B',
        ];
    }
}

?>
