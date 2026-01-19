<?php

namespace Rector\Tests\Php71\Rector\List_\ListToArrayDestructRector\Fixture;

final class SkipNullItemInForeach
{
    public function run()
    {
        foreach ($data as list($id, , $name)) {
            echo $id . $name;
        }
    }
}
