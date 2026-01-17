<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

class InClassMethod
{
    public function process(array $values): void
    {
        list() = $values;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

class InClassMethod
{
    public function process(array $values): void
    {
        list($unusedGenerated) = $values;
    }
}

?>
