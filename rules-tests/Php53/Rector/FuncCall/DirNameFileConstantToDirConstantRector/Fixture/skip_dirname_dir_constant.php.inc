<?php

namespace Rector\Tests\Php53\Rector\FuncCall\DirNameFileConstantToDirConstantRector\Fixture;

class SkipDirnameDirConstant
{
    public function run()
    {
        return dirname(__DIR__);
    }
}
