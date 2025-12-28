<?php

namespace Rector\Tests\CodeQuality\Rector\Include_\AbsolutizeRequireAndIncludePathRector\Fixture;

class MultipleConcatParts
{
    public function run(string $var1, string $var2)
    {
        require 'path/' . $var1 . '/' . $var2;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Include_\AbsolutizeRequireAndIncludePathRector\Fixture;

class MultipleConcatParts
{
    public function run(string $var1, string $var2)
    {
        require __DIR__ . '/path/' . $var1 . '/' . $var2;
    }
}

?>
