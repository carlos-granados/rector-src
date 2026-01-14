<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class SkipFirstClassCallable
{
    public function run()
    {
        return dirname(...);
    }
}
