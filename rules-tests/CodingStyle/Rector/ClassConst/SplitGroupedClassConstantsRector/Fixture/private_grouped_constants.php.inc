<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\SplitGroupedClassConstantsRector\Fixture;

class PrivateGroupedConstants
{
    private const FIRST = 1, SECOND = 2;
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\SplitGroupedClassConstantsRector\Fixture;

class PrivateGroupedConstants
{
    private const FIRST = 1;
    private const SECOND = 2;
}

?>
