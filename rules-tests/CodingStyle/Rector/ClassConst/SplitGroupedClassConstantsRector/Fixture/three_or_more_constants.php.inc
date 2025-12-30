<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\SplitGroupedClassConstantsRector\Fixture;

class ThreeOrMoreConstants
{
    const FIRST = 1, SECOND = 2, THIRD = 3, FOURTH = 4;
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\SplitGroupedClassConstantsRector\Fixture;

class ThreeOrMoreConstants
{
    const FIRST = 1;
    const SECOND = 2;
    const THIRD = 3;
    const FOURTH = 4;
}

?>
