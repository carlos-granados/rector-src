<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

class StringProvider
{
    public function getString(): string
    {
        return 'abcde';
    }
}

$provider = new StringProvider();
list($a, $b) = $provider->getString();

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSplitStringRector\Fixture;

class StringProvider
{
    public function getString(): string
    {
        return 'abcde';
    }
}

$provider = new StringProvider();
list($a, $b) = str_split($provider->getString());

?>
