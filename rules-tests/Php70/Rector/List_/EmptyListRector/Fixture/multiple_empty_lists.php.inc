<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function multipleEmptyLists()
{
    list() = [1];
    list() = [2];
    list() = [3];
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function multipleEmptyLists()
{
    list($unusedGenerated) = [1];
    list($unusedGenerated) = [2];
    list($unusedGenerated) = [3];
}

?>
