<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

class ParentStatic
{
    public static function staticMethod(): void
    {
    }
}

class SkipParentStaticCallMethod extends ParentStatic
{
    public static function staticMethod(): void
    {
        parent::staticMethod();
    }
}
