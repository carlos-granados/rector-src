<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Source\EliteManager;

class NullableTypeRename
{
    public function process(?EliteManager $manager): void
    {
        if ($manager !== null) {
            $manager->handle();
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Source\EliteManager;

class NullableTypeRename
{
    public function process(?EliteManager $eliteManager): void
    {
        if ($eliteManager !== null) {
            $eliteManager->handle();
        }
    }
}

?>
