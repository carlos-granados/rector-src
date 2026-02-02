<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\DocblockVarArrayFromGetterReturnRector\Fixture;

final class SkipAlreadyHasUsefulVar
{
    /**
     * @var list<string>
     */
    private array $names;

    /**
     * @return string[]
     */
    public function getNames(): array
    {
        return $this->names;
    }
}
