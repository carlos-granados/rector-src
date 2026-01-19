<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

function withConditional(bool $condition)
{
    $items = '';
    if ($condition) {
        $items[] = 'a';
    }
    $items[] = 'b';
    return $items;
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

function withConditional(bool $condition)
{
    $items = [];
    if ($condition) {
        $items[] = 'a';
    }
    $items[] = 'b';
    return $items;
}

?>
