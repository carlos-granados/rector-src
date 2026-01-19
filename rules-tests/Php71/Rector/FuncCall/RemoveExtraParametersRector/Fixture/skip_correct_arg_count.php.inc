<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class SkipCorrectArgCount
{
    public function run()
    {
        return strlen('test');
    }
}
