<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfNotNullReturnRector\Fixture;

final class SkipReturnNonNull
{
    public function run()
    {
        $newNode = 'something';
        if ($newNode !== null) {
            return $newNode;
        }

        return 'default';
    }
}
