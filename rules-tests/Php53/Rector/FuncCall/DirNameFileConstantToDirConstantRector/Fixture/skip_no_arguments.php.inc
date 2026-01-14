<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class SkipNoArguments
{
    public function run()
    {
        return dirname();
    }
}
