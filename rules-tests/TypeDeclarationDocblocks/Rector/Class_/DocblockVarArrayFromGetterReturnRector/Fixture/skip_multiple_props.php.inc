<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\DocblockVarArrayFromGetterReturnRector\Fixture;

final class SkipMultipleProps
{
    private array $names, $items;

    /**
     * @return string[]
     */
    public function getNames(): array
    {
        return $this->names;
    }
}
