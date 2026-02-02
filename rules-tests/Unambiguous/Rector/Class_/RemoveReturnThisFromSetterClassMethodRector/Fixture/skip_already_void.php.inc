<?php

namespace Rector\Tests\Unambiguous\Rector\Class_\RemoveReturnThisFromSetterClassMethodRector\Fixture;

final class SkipAlreadyVoid
{
    private string $name;

    public function setName(string $name): void
    {
        $this->name = $name;
    }
}
