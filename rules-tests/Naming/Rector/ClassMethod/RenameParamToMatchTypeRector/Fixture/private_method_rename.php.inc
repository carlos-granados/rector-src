<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Source\EliteManager;

class PrivateMethodRename
{
    private function handleInternal(EliteManager $manager): void
    {
        $manager->handle();
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Source\EliteManager;

class PrivateMethodRename
{
    private function handleInternal(EliteManager $eliteManager): void
    {
        $eliteManager->handle();
    }
}

?>
