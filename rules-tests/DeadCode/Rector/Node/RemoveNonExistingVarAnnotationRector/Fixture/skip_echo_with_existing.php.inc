<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class SkipEchoWithExisting
{
    public function run(string $message)
    {
        /** @var string $message */
        echo $message;
    }
}
