<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class SkipNoArgs
{
    public function run()
    {
        return time();
    }
}
