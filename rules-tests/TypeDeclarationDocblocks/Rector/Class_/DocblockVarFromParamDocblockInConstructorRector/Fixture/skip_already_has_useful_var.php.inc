<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\DocblockVarFromParamDocblockInConstructorRector\Fixture;

final class SkipAlreadyHasUsefulVar
{
    /**
     * @var list<string>
     */
    private array $names = [];

    /**
     * @param string[] $names
     */
    public function __construct(array $names)
    {
        $this->names = $names;
    }
}
