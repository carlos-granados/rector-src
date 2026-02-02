<?php

namespace Rector\Tests\Visibility\Rector\ClassMethod\ChangeMethodVisibilityRector\Fixture;

class DifferentParent
{
}

class SkipDifferentParentClass extends DifferentParent
{
    private function toBePublicMethod()
    {
    }
}
