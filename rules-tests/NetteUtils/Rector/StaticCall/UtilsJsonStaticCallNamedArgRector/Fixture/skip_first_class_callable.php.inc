<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

use Nette\Utils\Json;

final class SkipFirstClassCallable
{
    public function run()
    {
        $encoder = Json::encode(...);
        $decoder = Json::decode(...);
    }
}

