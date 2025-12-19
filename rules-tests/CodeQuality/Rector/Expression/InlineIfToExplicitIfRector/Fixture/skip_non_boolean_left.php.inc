<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\InlineIfToExplicitIfRector\Fixture;

class SkipNonBooleanLeft
{
    public function run()
    {
        $value = getValue();
        $value && doSomething();
    }
}

function getValue()
{
    return 'string';
}

function doSomething()
{
}
