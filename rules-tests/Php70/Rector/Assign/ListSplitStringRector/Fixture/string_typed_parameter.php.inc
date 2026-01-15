<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

function processString(string $input): void
{
    list($a, $b) = $input;
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

function processString(string $input): void
{
    list($a, $b) = str_split($input);
}

?>
