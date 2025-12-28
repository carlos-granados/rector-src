<?php

namespace Rector\Tests\CodeQuality\Rector\Isset_\IssetOnPropertyObjectToPropertyExistsRector\Fixture;

class SkipMultipleNonProperties
{
    public function run($var1, $var2)
    {
        return isset($var1, $var2);
    }
}

?>
