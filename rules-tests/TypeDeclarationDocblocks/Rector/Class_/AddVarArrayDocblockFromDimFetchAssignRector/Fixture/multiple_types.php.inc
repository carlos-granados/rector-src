<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddVarArrayDocblockFromDimFetchAssignRector\Fixture;

final class MultipleTypes
{
    private array $items = [];

    public function addString()
    {
        $this->items[] = 'string';
    }

    public function addInt()
    {
        $this->items[] = 123;
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddVarArrayDocblockFromDimFetchAssignRector\Fixture;

final class MultipleTypes
{
    /**
     * @var string[]|int[]
     */
    private array $items = [];

    public function addString()
    {
        $this->items[] = 'string';
    }

    public function addInt()
    {
        $this->items[] = 123;
    }
}

?>
