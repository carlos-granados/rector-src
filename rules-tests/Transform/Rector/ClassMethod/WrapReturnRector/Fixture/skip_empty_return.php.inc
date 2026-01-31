<?php

namespace Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Fixture;

use Rector\Tests\Transform\Rector\ClassMethod\WrapReturnRector\Source\SomeReturnClass;

final class SkipEmptyReturn extends SomeReturnClass
{
    public function getItem()
    {
        return;
    }
}
