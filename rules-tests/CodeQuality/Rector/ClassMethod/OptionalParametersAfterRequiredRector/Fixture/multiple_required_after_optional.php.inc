<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\OptionalParametersAfterRequiredRector\Fixture;

class MultipleRequiredAfterOptional
{
    public function run($optional = 1, int $required1, string $required2, array $required3)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\OptionalParametersAfterRequiredRector\Fixture;

class MultipleRequiredAfterOptional
{
    public function run($optional = 1, int $required1 = 0, string $required2 = '', array $required3 = [])
    {
    }
}

?>
