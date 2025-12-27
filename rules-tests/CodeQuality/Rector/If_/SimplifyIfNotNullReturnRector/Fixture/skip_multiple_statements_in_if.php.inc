<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfNotNullReturnRector\Fixture;

final class SkipMultipleStatementsInIf
{
    public function run()
    {
        $newNode = 'something';
        if ($newNode !== null) {
            echo 'debug';
            return $newNode;
        }

        return null;
    }
}
