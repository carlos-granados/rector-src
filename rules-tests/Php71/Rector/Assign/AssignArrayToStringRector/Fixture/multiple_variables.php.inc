<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

function multipleVariables()
{
    $first = '';
    $second = '';
    $first[] = 'a';
    $second[] = 'b';
    return [$first, $second];
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

function multipleVariables()
{
    $first = [];
    $second = [];
    $first[] = 'a';
    $second[] = 'b';
    return [$first, $second];
}

?>
