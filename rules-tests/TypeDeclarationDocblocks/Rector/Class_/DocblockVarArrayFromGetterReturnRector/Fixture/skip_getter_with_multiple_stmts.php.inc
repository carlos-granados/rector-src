<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\DocblockVarArrayFromGetterReturnRector\Fixture;

final class SkipGetterWithMultipleStmts
{
    private array $names;

    /**
     * @return string[]
     */
    public function getNames(): array
    {
        $this->logAccess();
        return $this->names;
    }

    private function logAccess(): void
    {
    }
}
