<?php

declare(strict_types=1);

namespace Rector\Tests\Naming\Rector\Assign\RenameVariableToMatchMethodCallReturnTypeRector\Source;

final class FastRunner
{
    public function run(): self
    {
        return $this;
    }

    public static function create(): self
    {
        return new self();
    }

    public function exit(): void
    {
    }
}
