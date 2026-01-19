<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class SkipNotListVar
{
    public function run()
    {
        $data = [1, 2, 3];
    }
}
