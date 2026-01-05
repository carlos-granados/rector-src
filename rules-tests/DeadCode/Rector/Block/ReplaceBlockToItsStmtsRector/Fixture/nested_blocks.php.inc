<?php

namespace Rector\Tests\DeadCode\Rector\Block\ReplaceBlockToItsStmtsRector\Fixture;

{
    {
        echo "nested";
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Block\ReplaceBlockToItsStmtsRector\Fixture;

echo "nested";

?>
