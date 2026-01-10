<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class SkipNopUsedInClosure
{
    public function run()
    {
        /** @var SomeClass $something */

        $callback = function () use ($something) {
            return $something->getName();
        };
    }
}
