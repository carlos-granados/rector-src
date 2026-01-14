<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

use Nette\Utils\Json;

final class WithVariableArg
{
    public function run($data, bool $pretty)
    {
        $encodedJson = Json::encode($data, $pretty);
    }
}

?>
-----
<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

use Nette\Utils\Json;

final class WithVariableArg
{
    public function run($data, bool $pretty)
    {
        $encodedJson = Json::encode($data, pretty: $pretty);
    }
}

?>
