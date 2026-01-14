<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

final class FullyQualifiedName
{
    public function run($data, $json)
    {
        $encodedJson = \Nette\Utils\Json::encode($data, true);
        $decodedJson = \Nette\Utils\Json::decode($json, true);
    }
}

?>
-----
<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

final class FullyQualifiedName
{
    public function run($data, $json)
    {
        $encodedJson = \Nette\Utils\Json::encode($data, pretty: true);
        $decodedJson = \Nette\Utils\Json::decode($json, forceArrays: true);
    }
}

?>
