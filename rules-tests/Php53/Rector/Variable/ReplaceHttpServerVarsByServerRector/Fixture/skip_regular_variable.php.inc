<?php

namespace Rector\Tests\Php53\Rector\Variable\ReplaceHttpServerVarsByServerRector\Fixture;

class SkipRegularVariable
{
    public function run()
    {
        $httpServerVars = [];
        return $httpServerVars;
    }
}

?>
