<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

class WithEregInMethod
{
    public function matchPattern(string $text): int
    {
        return ereg('pattern', $text);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

class WithEregInMethod
{
    public function matchPattern(string $text): int
    {
        return preg_match('#pattern#m', $text);
    }
}

?>
