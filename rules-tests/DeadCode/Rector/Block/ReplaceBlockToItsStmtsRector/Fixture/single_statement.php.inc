<?php

namespace Rector\Tests\DeadCode\Rector\Block\ReplaceBlockToItsStmtsRector\Fixture;

{
    echo "single statement";
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Block\ReplaceBlockToItsStmtsRector\Fixture;

echo "single statement";

?>
