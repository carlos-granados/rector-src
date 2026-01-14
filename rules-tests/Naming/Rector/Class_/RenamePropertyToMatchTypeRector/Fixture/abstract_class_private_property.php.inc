<?php

namespace Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Source\EliteManager;

abstract class AbstractClassPrivateProperty
{
    private EliteManager $eventManager;

    public function __construct(EliteManager $eventManager)
    {
        $this->eventManager = $eventManager;
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Source\EliteManager;

abstract class AbstractClassPrivateProperty
{
    private EliteManager $eliteManager;

    public function __construct(EliteManager $eventManager)
    {
        $this->eliteManager = $eventManager;
    }
}

?>
