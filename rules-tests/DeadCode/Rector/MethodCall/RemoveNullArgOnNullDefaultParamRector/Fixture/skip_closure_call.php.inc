<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\MethodCall\RemoveNullArgOnNullDefaultParamRector\Fixture;

final class SkipClosureCall
{
    public function run()
    {
        $closure = function (?string $name = null, ?int $id = null) {};
        $closure(null, null);
    }
}
