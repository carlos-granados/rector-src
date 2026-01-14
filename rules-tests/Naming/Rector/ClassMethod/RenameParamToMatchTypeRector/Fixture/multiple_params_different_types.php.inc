<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Source\EliteManager;
use ReflectionProperty;

class MultipleParamsDifferentTypes
{
    public function process(EliteManager $manager, ReflectionProperty $property): void
    {
        $manager->handle();
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Source\EliteManager;
use ReflectionProperty;

class MultipleParamsDifferentTypes
{
    public function process(EliteManager $eliteManager, ReflectionProperty $reflectionProperty): void
    {
        $eliteManager->handle();
    }
}

?>
