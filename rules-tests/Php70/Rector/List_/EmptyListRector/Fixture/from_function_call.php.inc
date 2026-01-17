<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function fromFunctionCall()
{
    list() = getValues();
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function fromFunctionCall()
{
    list($unusedGenerated) = getValues();
}

?>
