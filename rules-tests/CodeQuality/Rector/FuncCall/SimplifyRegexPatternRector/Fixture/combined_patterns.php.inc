<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyRegexPatternRector\Fixture;

class CombinedPatterns
{
    public function run($value)
    {
        preg_match('#[a-zA-Z0-9_]+[0-9]#', $value);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyRegexPatternRector\Fixture;

class CombinedPatterns
{
    public function run($value)
    {
        preg_match('#\w+\d#', $value);
    }
}

?>
