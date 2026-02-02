<?php

namespace Rector\Tests\Visibility\Rector\ClassMethod\ChangeMethodVisibilityRector\Fixture;

use Rector\Tests\Visibility\Rector\ClassMethod\ChangeMethodVisibilityRector\Source\ParentObject;

class SkipNonMatchingMethod extends ParentObject
{
    private function differentMethod()
    {
    }
}
