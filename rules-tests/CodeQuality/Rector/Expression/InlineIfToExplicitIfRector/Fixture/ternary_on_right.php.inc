<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\InlineIfToExplicitIfRector\Fixture;

class TernaryOnRight
{
    public function run()
    {
        $userId = null;
        $default = 10;
        is_null($userId) && $userId = $default > 5 ? $default : 5;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\InlineIfToExplicitIfRector\Fixture;

class TernaryOnRight
{
    public function run()
    {
        $userId = null;
        $default = 10;
        if (is_null($userId)) {
            $userId = $default > 5 ? $default : 5;
        }
    }
}

?>
