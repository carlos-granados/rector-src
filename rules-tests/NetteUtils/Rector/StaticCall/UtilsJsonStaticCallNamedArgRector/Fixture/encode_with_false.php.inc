<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

use Nette\Utils\Json;

final class EncodeWithFalse
{
    public function run($data)
    {
        $encodedJson = Json::encode($data, false);
    }
}

?>
-----
<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

use Nette\Utils\Json;

final class EncodeWithFalse
{
    public function run($data)
    {
        $encodedJson = Json::encode($data, pretty: false);
    }
}

?>
