<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\MethodCall\RemoveNullArgOnNullDefaultParamRector\Fixture;

final class SkipArrowFunctionCall
{
    public function run()
    {
        $arrow = fn(?string $name = null, ?int $id = null) => $name . $id;
        $arrow(null, null);
    }
}
