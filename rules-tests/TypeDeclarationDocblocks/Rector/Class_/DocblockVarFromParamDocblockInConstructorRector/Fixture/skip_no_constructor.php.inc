<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\DocblockVarFromParamDocblockInConstructorRector\Fixture;

final class SkipNoConstructor
{
    private array $names = [];

    public function setNames(array $names): void
    {
        $this->names = $names;
    }
}
