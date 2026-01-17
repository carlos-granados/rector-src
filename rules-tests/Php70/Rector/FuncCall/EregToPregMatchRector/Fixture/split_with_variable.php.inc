<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function splitWithVariable()
{
    $pattern = '\t';
    $result = split($pattern, 'hello\tworld');
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function splitWithVariable()
{
    $pattern = '\t';
    $result = preg_split('#' . preg_quote($pattern, '#') . '#m', 'hello\tworld');
}

?>
