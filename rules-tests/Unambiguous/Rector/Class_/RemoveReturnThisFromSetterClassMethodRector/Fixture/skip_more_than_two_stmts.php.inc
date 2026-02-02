<?php

namespace Rector\Tests\Unambiguous\Rector\Class_\RemoveReturnThisFromSetterClassMethodRector\Fixture;

final class SkipMoreThanTwoStmts
{
    private string $name;

    public function setName(string $name): self
    {
        $this->validateName($name);
        $this->name = $name;
        return $this;
    }

    private function validateName(string $name): void
    {
    }
}
