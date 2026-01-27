<?php

namespace Rector\Tests\Php74\Rector\StaticCall\ExportToReflectionFunctionRector\Fixture;

class SkipNamedArguments
{
    public function run()
    {
        $reflectionFunction = \ReflectionFunction::export(name: 'foo');
        $reflectionFunctionAsString = \ReflectionFunction::export(return: true, name: 'foo');
    }
}
