<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

use Nette\Utils\Json;

final class DecodeWithFalse
{
    public function run($json)
    {
        $decodedJson = Json::decode($json, false);
    }
}

?>
-----
<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

use Nette\Utils\Json;

final class DecodeWithFalse
{
    public function run($json)
    {
        $decodedJson = Json::decode($json, forceArrays: false);
    }
}

?>
