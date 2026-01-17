<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function eregiReplaceWithVariable()
{
    $pattern = 'hello';
    $result = eregi_replace($pattern, 'world', 'HELLO there');
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function eregiReplaceWithVariable()
{
    $pattern = 'hello';
    $result = preg_replace('#' . preg_quote($pattern, '#') . '#mi', 'world', 'HELLO there');
}

?>
