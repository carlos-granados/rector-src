<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function inArrowFunction()
{
    $callback = fn (string $text) => ereg('pattern', $text);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function inArrowFunction()
{
    $callback = fn (string $text) => preg_match('#pattern#m', $text);
}

?>
