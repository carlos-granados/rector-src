<?php

namespace Rector\Tests\CodeQuality\Rector\Isset_\IssetOnPropertyObjectToPropertyExistsRector\Fixture;

class SkipMixedPropertyAndVariable
{
    private $x;

    public function run($variable)
    {
        isset($this->x, $variable);
    }
}

?>
