<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class SkipDynamicMethodCall
{
    public function run($object)
    {
        return $object->unknownMethod(1, 2, 3);
    }
}
