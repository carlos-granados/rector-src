<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

function getString(): string
{
    return 'abcde';
}

list($a, $b) = getString();

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

function getString(): string
{
    return 'abcde';
}

list($a, $b) = str_split(getString());

?>
