<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\PropertyTypeFromStrictSetterGetterRector\Fixture;

final class SkipOnlySetter
{
    private $name = 'John';

    public function setName(string $name): void
    {
        $this->name = $name;
    }
}
