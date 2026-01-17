<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function withQuantifiers()
{
    $result1 = ereg('a+', 'aaaa');
    $result2 = ereg('b*', 'bbbb');
    $result3 = ereg('c?', 'c');
    $result4 = ereg('d{2,4}', 'ddd');
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function withQuantifiers()
{
    $result1 = preg_match('#a+#m', 'aaaa');
    $result2 = preg_match('#b*#m', 'bbbb');
    $result3 = preg_match('#c?#m', 'c');
    $result4 = preg_match('#d{2,4}#m', 'ddd');
}

?>
