<?php

namespace Rector\Tests\Unambiguous\Rector\Class_\RemoveReturnThisFromSetterClassMethodRector\Fixture;

final class SkipStaticProperty
{
    private static string $name;

    public function setName(string $name): self
    {
        self::$name = $name;
        return $this;
    }
}
