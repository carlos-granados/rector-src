<?php

namespace Rector\Tests\DeadCode\Rector\Array_\RemoveDuplicatedArrayKeyRector\Fixture;

final class SkipPostIncDecrement
{
    public function run()
    {
        $index = 0;

        [
            $index => 'First',
            $index++ => 'Second',
            $index++ => 'Third',
        ];

        [
            $index => 'First',
            $index-- => 'Second',
            $index-- => 'Third',
        ];
    }
}
