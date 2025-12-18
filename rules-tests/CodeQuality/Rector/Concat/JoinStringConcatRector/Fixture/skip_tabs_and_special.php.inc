<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\JoinStringConcatRector\Fixture;

class SkipTabsAndSpecial
{
    public function run()
    {
        $withTab = 'Hello\tWorld';
        $withCarriageReturn = 'Hello\rWorld';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\JoinStringConcatRector\Fixture;

class SkipTabsAndSpecial
{
    public function run()
    {
        $withTab = 'Hello\tWorld';
        $withCarriageReturn = 'Hello\rWorld';
    }
}

?>
