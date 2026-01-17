<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function inForeach()
{
    $data = [[1, 2], [3, 4]];
    foreach ($data as list()) {
        echo 'processing';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function inForeach()
{
    $data = [[1, 2], [3, 4]];
    foreach ($data as list($unusedGenerated)) {
        echo 'processing';
    }
}

?>
