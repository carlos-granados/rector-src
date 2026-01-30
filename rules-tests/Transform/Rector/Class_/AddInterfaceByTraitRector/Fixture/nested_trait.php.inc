<?php

namespace Rector\Tests\Transform\Rector\Class_\AddInterfaceByTraitRector\Fixture;

use Rector\Tests\Transform\Rector\Class_\AddInterfaceByTraitRector\Source\TraitUsingTrait;

class NestedTrait
{
    use TraitUsingTrait;
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\Class_\AddInterfaceByTraitRector\Fixture;

use Rector\Tests\Transform\Rector\Class_\AddInterfaceByTraitRector\Source\TraitUsingTrait;

class NestedTrait implements \Rector\Tests\Transform\Rector\Class_\AddInterfaceByTraitRector\Source\SomeInterface
{
    use TraitUsingTrait;
}

?>
