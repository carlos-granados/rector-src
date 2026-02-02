<?php

namespace Rector\Tests\Visibility\Rector\ClassConst\ChangeConstantVisibilityRector\Fixture;

use Rector\Tests\Visibility\Rector\ClassConst\ChangeConstantVisibilityRector\Source\ParentObject;

final class SkipNonMatchingConstant extends ParentObject
{
    public const DIFFERENT_CONSTANT = 1;
}
