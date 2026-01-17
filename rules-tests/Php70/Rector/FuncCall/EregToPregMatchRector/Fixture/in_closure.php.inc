<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function inClosure()
{
    $callback = function (string $text) {
        return ereg('pattern', $text);
    };
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function inClosure()
{
    $callback = function (string $text) {
        return preg_match('#pattern#m', $text);
    };
}

?>
