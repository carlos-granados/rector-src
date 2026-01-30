<?php

namespace Rector\Tests\Transform\Rector\Class_\AddInterfaceByTraitRector\Fixture;

use Rector\Tests\Transform\Rector\Class_\AddInterfaceByTraitRector\Source\ParentWithTrait;

class TraitFromParent extends ParentWithTrait
{
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\Class_\AddInterfaceByTraitRector\Fixture;

use Rector\Tests\Transform\Rector\Class_\AddInterfaceByTraitRector\Source\ParentWithTrait;

class TraitFromParent extends ParentWithTrait implements \Rector\Tests\Transform\Rector\Class_\AddInterfaceByTraitRector\Source\SomeInterface
{
}

?>
