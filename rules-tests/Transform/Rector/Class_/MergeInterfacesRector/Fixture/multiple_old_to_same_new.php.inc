<?php

namespace Rector\Tests\Transform\Rector\Class_\MergeInterfacesRector\Fixture;

use Rector\Tests\Transform\Rector\Class_\MergeInterfacesRector\Source\SomeOldInterface;
use Rector\Tests\Transform\Rector\Class_\MergeInterfacesRector\Source\AnotherOldInterface;

class MultipleOldToSameNew implements SomeOldInterface, AnotherOldInterface
{
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\Class_\MergeInterfacesRector\Fixture;

use Rector\Tests\Transform\Rector\Class_\MergeInterfacesRector\Source\SomeOldInterface;
use Rector\Tests\Transform\Rector\Class_\MergeInterfacesRector\Source\AnotherOldInterface;

class MultipleOldToSameNew implements \Rector\Tests\Transform\Rector\Class_\MergeInterfacesRector\Source\SomeInterface
{
}

?>
