<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\DocblockVarArrayFromPropertyDefaultsRector\Fixture;

final class SkipAlreadyHasUsefulVar
{
    /**
     * @var list<string>
     */
    private array $names = ['Jim', 'Rohn'];
}
