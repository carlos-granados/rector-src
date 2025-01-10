<?php

namespace Rector\Tests\Php83\Rector\ClassMethod\AddOverrideAttributeToOverriddenMethodsRector\Source;

trait ExampleFromTrait
{
    public function run()
    {
        $value = 'non empty';
    }
}
