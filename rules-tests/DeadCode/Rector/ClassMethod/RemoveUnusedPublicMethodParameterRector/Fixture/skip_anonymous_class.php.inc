<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPublicMethodParameterRector\Fixture;

function skipAnonymousClass()
{
    return new class {
        public function run($unused)
        {
            echo 'test';
        }
    };
}

?>
