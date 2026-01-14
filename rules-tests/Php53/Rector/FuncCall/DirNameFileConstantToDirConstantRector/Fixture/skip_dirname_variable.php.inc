<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class SkipDirnameVariable
{
    public function run(string $path)
    {
        return dirname($path);
    }
}
