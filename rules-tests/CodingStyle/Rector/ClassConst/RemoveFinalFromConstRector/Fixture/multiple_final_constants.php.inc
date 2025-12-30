<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\RemoveFinalFromConstRector\Fixture;

final class MultipleFinalConstants
{
    final public const NAME = 'value';
    final public const AGE = 42;
    final protected const STATUS = 'active';
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\RemoveFinalFromConstRector\Fixture;

final class MultipleFinalConstants
{
    public const NAME = 'value';
    public const AGE = 42;
    protected const STATUS = 'active';
}

?>
