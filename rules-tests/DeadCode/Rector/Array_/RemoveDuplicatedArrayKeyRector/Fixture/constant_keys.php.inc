<?php

namespace Rector\Tests\DeadCode\Rector\Array_\RemoveDuplicatedArrayKeyRector\Fixture;

class ConstantKeys
{
    const MY_KEY = 'mykey';

    public function run()
    {
        $items = [
            self::MY_KEY => 'A',
            self::MY_KEY => 'B',
        ];
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Array_\RemoveDuplicatedArrayKeyRector\Fixture;

class ConstantKeys
{
    const MY_KEY = 'mykey';

    public function run()
    {
        $items = [
            self::MY_KEY => 'B',
        ];
    }
}

?>
