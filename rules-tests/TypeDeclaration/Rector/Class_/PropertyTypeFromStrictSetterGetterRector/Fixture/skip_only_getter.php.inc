<?php

namespace Rector\Tests\TypeDeclaration\Rector\Class_\PropertyTypeFromStrictSetterGetterRector\Fixture;

final class SkipOnlyGetter
{
    private $name = 'John';

    public function getName(): string
    {
        return $this->name;
    }
}
