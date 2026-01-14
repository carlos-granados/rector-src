<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Source\EliteManager;

trait TraitMethod
{
    public function handleRequest(EliteManager $manager): void
    {
        $manager->handle();
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Source\EliteManager;

trait TraitMethod
{
    public function handleRequest(EliteManager $eliteManager): void
    {
        $eliteManager->handle();
    }
}

?>
