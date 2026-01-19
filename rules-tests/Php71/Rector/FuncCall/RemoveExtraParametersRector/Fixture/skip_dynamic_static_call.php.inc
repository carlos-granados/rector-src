<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class SkipDynamicStaticCall
{
    public function run()
    {
        $class = SomeClass::class;
        return $class::method(1, 2, 3);
    }
}
