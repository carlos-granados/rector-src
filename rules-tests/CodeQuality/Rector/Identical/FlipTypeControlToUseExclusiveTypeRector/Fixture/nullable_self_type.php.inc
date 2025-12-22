<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\FlipTypeControlToUseExclusiveTypeRector\Fixture;

final class NullableSelfType
{
    public function run(?self $instance)
    {
        if ($instance === null) {
            return;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\FlipTypeControlToUseExclusiveTypeRector\Fixture;

final class NullableSelfType
{
    public function run(?self $instance)
    {
        if (!$instance instanceof \Rector\Tests\CodeQuality\Rector\Identical\FlipTypeControlToUseExclusiveTypeRector\Fixture\NullableSelfType) {
            return;
        }
    }
}

?>
