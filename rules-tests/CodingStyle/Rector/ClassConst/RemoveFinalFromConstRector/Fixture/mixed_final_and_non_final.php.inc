<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\RemoveFinalFromConstRector\Fixture;

final class MixedFinalAndNonFinal
{
    final public const FINAL_NAME = 'value';
    public const NON_FINAL_NAME = 'other';
    final protected const FINAL_AGE = 42;
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\RemoveFinalFromConstRector\Fixture;

final class MixedFinalAndNonFinal
{
    public const FINAL_NAME = 'value';
    public const NON_FINAL_NAME = 'other';
    protected const FINAL_AGE = 42;
}

?>
