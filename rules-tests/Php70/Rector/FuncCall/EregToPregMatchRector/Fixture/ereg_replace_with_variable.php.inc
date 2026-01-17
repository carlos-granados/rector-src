<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function eregReplaceWithVariable()
{
    $pattern = 'hello';
    $result = ereg_replace($pattern, 'world', 'hello there');
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function eregReplaceWithVariable()
{
    $pattern = 'hello';
    $result = preg_replace('#' . preg_quote($pattern, '#') . '#m', 'world', 'hello there');
}

?>
