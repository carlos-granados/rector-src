<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnExprInConstructRector\Fixture;

final class SkipArrowFunction
{
    public function __construct()
    {
        $callbacks = [
            'first' => fn($x) => $x,
            'second' => fn($y) => $y->method(),
        ];
    }
}
