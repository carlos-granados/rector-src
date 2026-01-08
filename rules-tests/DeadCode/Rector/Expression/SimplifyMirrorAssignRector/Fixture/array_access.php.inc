<?php

namespace Rector\Tests\DeadCode\Rector\Expression\SimplifyMirrorAssignRector\Fixture;

function arrayAccess()
{
    $arr = [1, 2, 3];
    $arr[0] = $arr[0];
    $arr['key'] = $arr['key'];
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Expression\SimplifyMirrorAssignRector\Fixture;

function arrayAccess()
{
    $arr = [1, 2, 3];
}

?>
