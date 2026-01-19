<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class SkipForeachNotListValue
{
    public function run()
    {
        foreach ($data as $item) {
            echo $item;
        }
    }
}
