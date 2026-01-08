<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

function standalone_function($value)
{
    if ($value) {
        return;
    }
    
    return;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

function standalone_function($value)
{
    if ($value) {
        return;
    }
}

?>
