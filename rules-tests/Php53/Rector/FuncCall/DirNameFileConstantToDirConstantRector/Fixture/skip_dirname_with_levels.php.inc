<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class SkipDirnameWithLevels
{
    public function run()
    {
        return dirname(__FILE__, 2);
    }
}
