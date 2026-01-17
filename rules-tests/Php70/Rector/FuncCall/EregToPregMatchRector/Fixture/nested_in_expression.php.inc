<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function nestedInExpression(string $text)
{
    $result = 'Match: ' . (ereg('pattern', $text) ? 'yes' : 'no');
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function nestedInExpression(string $text)
{
    $result = 'Match: ' . (preg_match('#pattern#m', $text) ? 'yes' : 'no');
}

?>
