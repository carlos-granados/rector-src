<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyRegexPatternRector\Fixture;

class MultiplePatternsInOneRegex
{
    public function run($value)
    {
        preg_match('#[0-9].*[a-zA-Z0-9_]#', $value);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyRegexPatternRector\Fixture;

class MultiplePatternsInOneRegex
{
    public function run($value)
    {
        preg_match('#\d.*\w#', $value);
    }
}

?>
