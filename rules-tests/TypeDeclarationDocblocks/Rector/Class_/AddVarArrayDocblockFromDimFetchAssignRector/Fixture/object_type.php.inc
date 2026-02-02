<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddVarArrayDocblockFromDimFetchAssignRector\Fixture;

use stdClass;

final class ObjectType
{
    private array $items = [];

    public function addItem(stdClass $item)
    {
        $this->items[] = $item;
    }
}

?>
-----
<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddVarArrayDocblockFromDimFetchAssignRector\Fixture;

use stdClass;

final class ObjectType
{
    /**
     * @var \stdClass[]
     */
    private array $items = [];

    public function addItem(stdClass $item)
    {
        $this->items[] = $item;
    }
}

?>
