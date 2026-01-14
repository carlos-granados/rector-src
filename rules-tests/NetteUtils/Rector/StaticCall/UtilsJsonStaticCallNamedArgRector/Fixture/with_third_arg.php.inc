<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

use Nette\Utils\Json;

final class WithThirdArg
{
    public function run($data)
    {
        $encodedJson = Json::encode($data, true, 512);
    }
}

?>
-----
<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

use Nette\Utils\Json;

final class WithThirdArg
{
    public function run($data)
    {
        $encodedJson = Json::encode($data, pretty: true, 512);
    }
}

?>
