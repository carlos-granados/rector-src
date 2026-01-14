<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

use Nette\Utils\Json;

final class ExpressionAsArg
{
    public function run($data, bool $debug)
    {
        $encodedJson = Json::encode($data, $debug && true);
    }
}

?>
-----
<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

use Nette\Utils\Json;

final class ExpressionAsArg
{
    public function run($data, bool $debug)
    {
        $encodedJson = Json::encode($data, pretty: $debug && true);
    }
}

?>
