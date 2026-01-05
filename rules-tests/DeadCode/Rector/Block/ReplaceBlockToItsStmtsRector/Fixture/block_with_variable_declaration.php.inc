<?php

namespace Rector\Tests\DeadCode\Rector\Block\ReplaceBlockToItsStmtsRector\Fixture;

{
    $x = 1;
    $y = 2;
    echo $x + $y;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Block\ReplaceBlockToItsStmtsRector\Fixture;

$x = 1;
$y = 2;
echo $x + $y;

?>
