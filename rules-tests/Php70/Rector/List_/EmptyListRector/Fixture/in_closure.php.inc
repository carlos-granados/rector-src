<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function inClosure()
{
    $func = function () {
        list() = [1, 2];
    };
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function inClosure()
{
    $func = function () {
        list($unusedGenerated) = [1, 2];
    };
}

?>
