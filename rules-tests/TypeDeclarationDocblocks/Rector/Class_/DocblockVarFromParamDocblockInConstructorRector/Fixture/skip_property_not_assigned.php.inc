<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\DocblockVarFromParamDocblockInConstructorRector\Fixture;

final class SkipPropertyNotAssigned
{
    private array $names = [];

    /**
     * @param string[] $items
     */
    public function __construct(array $items)
    {
        // names property is not assigned
    }
}
