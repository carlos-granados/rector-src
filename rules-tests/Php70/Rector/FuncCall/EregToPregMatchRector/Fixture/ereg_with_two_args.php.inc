<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function eregWithTwoArgs()
{
    $result = ereg('hitom', '...hitom...');
    var_dump($result);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function eregWithTwoArgs()
{
    $result = preg_match('#hitom#m', '...hitom...');
    var_dump($result);
}

?>
