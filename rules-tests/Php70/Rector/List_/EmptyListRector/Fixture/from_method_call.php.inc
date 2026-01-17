<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

class FromMethodCall
{
    public function process(): void
    {
        list() = $this->getValues();
    }

    private function getValues(): array
    {
        return [1, 2];
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

class FromMethodCall
{
    public function process(): void
    {
        list($unusedGenerated) = $this->getValues();
    }

    private function getValues(): array
    {
        return [1, 2];
    }
}

?>
