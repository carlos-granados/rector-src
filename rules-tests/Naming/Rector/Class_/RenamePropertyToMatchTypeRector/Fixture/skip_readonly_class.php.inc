<?php

namespace Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Source\EliteManager;

readonly class SkipReadonlyClass
{
    public function __construct(
        private EliteManager $eventManager
    ) {
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Source\EliteManager;

readonly class SkipReadonlyClass
{
    public function __construct(
        private EliteManager $eliteManager
    ) {
    }
}

?>
