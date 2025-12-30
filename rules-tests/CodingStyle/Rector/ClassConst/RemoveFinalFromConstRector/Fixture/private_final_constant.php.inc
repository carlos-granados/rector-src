<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\RemoveFinalFromConstRector\Fixture;

final class PrivateFinalConstant
{
    final private const NAME = 'value';
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\RemoveFinalFromConstRector\Fixture;

final class PrivateFinalConstant
{
    private const NAME = 'value';
}

?>
