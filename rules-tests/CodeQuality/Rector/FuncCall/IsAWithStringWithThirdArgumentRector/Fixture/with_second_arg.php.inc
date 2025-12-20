<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\IsAWithStringWithThirdArgumentRector\Fixture;

final class WithSecondArg
{
    public function run(string $value)
    {
        return is_a($value, 'stdClass');
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\IsAWithStringWithThirdArgumentRector\Fixture;

final class WithSecondArg
{
    public function run(string $value)
    {
        return is_a($value, 'stdClass', true);
    }
}

?>
