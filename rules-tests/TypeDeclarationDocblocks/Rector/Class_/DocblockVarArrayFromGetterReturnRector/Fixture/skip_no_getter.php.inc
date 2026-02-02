<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\DocblockVarArrayFromGetterReturnRector\Fixture;

final class SkipNoGetter
{
    private array $names;

    public function setNames(array $names): void
    {
        $this->names = $names;
    }
}
