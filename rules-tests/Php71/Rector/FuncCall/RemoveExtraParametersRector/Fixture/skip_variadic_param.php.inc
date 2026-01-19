<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class SkipVariadicParam
{
    public function run()
    {
        $this->doSomething(1, 2, 3, 4, 5);
    }

    private function doSomething(...$values)
    {
    }
}
