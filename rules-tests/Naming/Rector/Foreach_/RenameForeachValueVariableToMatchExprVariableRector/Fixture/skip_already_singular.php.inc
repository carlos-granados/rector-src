<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class SkipAlreadySingular
{
    public function run()
    {
        foreach ($items as $item) {
            echo $item;
        }
    }
}
