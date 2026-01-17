<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function eregiWithThreeArgs()
{
    $result = eregi('hitom', '...HITOM...', $matches);
    var_dump($result);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function eregiWithThreeArgs()
{
    $result = preg_match('#hitom#mi', '...HITOM...', $matches) ? strlen($matches[0]) : false;
    var_dump($result);
}

?>
