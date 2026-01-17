<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function withAnchors()
{
    $result1 = ereg('^start', 'start of string');
    $result2 = ereg('end$', 'string end');
    $result3 = ereg('^exact$', 'exact');
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function withAnchors()
{
    $result1 = preg_match('#^start#m', 'start of string');
    $result2 = preg_match('#end$#m', 'string end');
    $result3 = preg_match('#^exact$#m', 'exact');
}

?>
