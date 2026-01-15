<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

class StaticStringProvider
{
    public static function getString(): string
    {
        return 'abcde';
    }
}

list($a, $b) = StaticStringProvider::getString();

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

class StaticStringProvider
{
    public static function getString(): string
    {
        return 'abcde';
    }
}

list($a, $b) = str_split(StaticStringProvider::getString());

?>
