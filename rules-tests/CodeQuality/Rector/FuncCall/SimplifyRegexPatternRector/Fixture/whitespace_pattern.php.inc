<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyRegexPatternRector\Fixture;

class WhitespacePattern
{
    public function run($value)
    {
        preg_match('#[\r\n\t\f\v ]+#', $value);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyRegexPatternRector\Fixture;

class WhitespacePattern
{
    public function run($value)
    {
        preg_match('#\s+#', $value);
    }
}

?>
