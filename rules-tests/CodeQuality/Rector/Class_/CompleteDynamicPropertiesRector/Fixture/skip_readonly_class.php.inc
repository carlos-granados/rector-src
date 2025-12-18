<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\CompleteDynamicPropertiesRector\Fixture;

readonly class SkipReadonlyClass
{
    public function set()
    {
        $this->value = 5;
    }
}
