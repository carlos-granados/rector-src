<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function shortArraySyntax()
{
    [] = [1, 2];
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\List_\EmptyListRector\Fixture;

function shortArraySyntax()
{
    [$unusedGenerated] = [1, 2];
}

?>
