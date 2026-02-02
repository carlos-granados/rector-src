<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddVarArrayDocblockFromDimFetchAssignRector\Fixture;

final class SkipNonArrayType
{
    private string $name = '';

    public function setName()
    {
        $this->name = 'John';
    }
}
