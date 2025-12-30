<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\MakeInheritedMethodVisibilitySameAsParentRector\Fixture;

trait SomeTraitForSkip
{
    protected function traitMethod()
    {
    }
}

class SkipUsesTraitMethod
{
    use SomeTraitForSkip;
    
    // Trait methods are not handled by this rule (only parent classes)
    public function traitMethod()
    {
    }
}
