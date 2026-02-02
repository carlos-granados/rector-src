<?php

namespace Rector\Tests\Unambiguous\Rector\Class_\RemoveReturnThisFromSetterClassMethodRector\Fixture;

final class SkipVariadicParam
{
    private array $items;

    public function setItems(string ...$items): self
    {
        $this->items = $items;
        return $this;
    }
}
