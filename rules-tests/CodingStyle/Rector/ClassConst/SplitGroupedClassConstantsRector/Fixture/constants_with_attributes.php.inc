<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\SplitGroupedClassConstantsRector\Fixture;

class ConstantsWithAttributes
{
    #[\Deprecated]
    public const FIRST = 1, SECOND = 2;
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\SplitGroupedClassConstantsRector\Fixture;

class ConstantsWithAttributes
{
    #[\Deprecated]
    public const FIRST = 1;
    #[\Deprecated]
    public const SECOND = 2;
}

?>
