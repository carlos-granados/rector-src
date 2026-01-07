<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPromotedPropertyRector\Fixture;

function skipAnonymousClass()
{
    return new class {
        public function __construct(
            private $unusedInAnonymous
        ) {
        }
    };
}

?>
