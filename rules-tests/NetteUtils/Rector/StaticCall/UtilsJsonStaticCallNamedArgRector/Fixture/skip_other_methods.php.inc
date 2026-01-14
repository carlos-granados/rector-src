<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

use Nette\Utils\Json;

final class SkipOtherMethods
{
    public function run($data)
    {
        // These methods don't exist on Json but should be skipped
        $result = Json::someOtherMethod($data, true);
    }
}

