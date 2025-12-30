<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\SplitGroupedClassConstantsRector\Fixture;

class FinalGroupedConstants
{
    final public const FIRST = 1, SECOND = 2;
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\SplitGroupedClassConstantsRector\Fixture;

class FinalGroupedConstants
{
    final public const FIRST = 1;
    final public const SECOND = 2;
}

?>
