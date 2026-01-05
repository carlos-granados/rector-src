<?php

namespace Rector\Tests\CodingStyle\Rector\Use_\SeparateMultiUseImportsRector\Fixture;

use Rector\Tests\CodingStyle\Rector\Use_\SeparateMultiUseImportsRector\Source\FirstTrait;
use Rector\Tests\CodingStyle\Rector\Use_\SeparateMultiUseImportsRector\Source\SecondTrait;
use Rector\Tests\CodingStyle\Rector\Use_\SeparateMultiUseImportsRector\Source\ThirdTrait;

class ThreeOrMoreTraits
{
    use FirstTrait, SecondTrait, ThirdTrait;
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Use_\SeparateMultiUseImportsRector\Fixture;

use Rector\Tests\CodingStyle\Rector\Use_\SeparateMultiUseImportsRector\Source\FirstTrait;
use Rector\Tests\CodingStyle\Rector\Use_\SeparateMultiUseImportsRector\Source\SecondTrait;
use Rector\Tests\CodingStyle\Rector\Use_\SeparateMultiUseImportsRector\Source\ThirdTrait;

class ThreeOrMoreTraits
{
    use FirstTrait;
    use SecondTrait;
    use ThirdTrait;
}

?>
