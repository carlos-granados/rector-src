<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\JoinStringConcatRector\Fixture;

class EmptyStrings
{
    public function run()
    {
        $empty1 = '' . 'text';
        $empty2 = 'text' . '';
        $bothEmpty = '' . '';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Concat\JoinStringConcatRector\Fixture;

class EmptyStrings
{
    public function run()
    {
        $empty1 = 'text';
        $empty2 = 'text';
        $bothEmpty = '';
    }
}

?>
