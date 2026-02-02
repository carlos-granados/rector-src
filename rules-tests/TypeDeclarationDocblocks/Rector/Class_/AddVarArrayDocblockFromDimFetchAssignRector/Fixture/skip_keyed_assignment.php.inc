<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddVarArrayDocblockFromDimFetchAssignRector\Fixture;

final class SkipKeyedAssignment
{
    private array $items = [];

    public function addItem(string $key)
    {
        $this->items[$key] = 'value';
    }
}
