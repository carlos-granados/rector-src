<?php

namespace Rector\Tests\DeadCode\Rector\Cast\RecastingRemovalRector\Fixture;

class SkipDifferentCasts
{
    public function run()
    {
        // These should NOT be removed as they change the type
        $string = 'test';
        $array = (array) $string;

        $int = 5;
        $string = (string) $int;

        $bool = true;
        $int = (int) $bool;
    }
}
