<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function splitiWithVariable()
{
    $pattern = 'abc';
    $result = spliti($pattern, 'xyzABCdef');
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function splitiWithVariable()
{
    $pattern = 'abc';
    $result = preg_split('#' . preg_quote($pattern, '#') . '#mi', 'xyzABCdef');
}

?>
