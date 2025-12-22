<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SingleInArrayToCompareRector\Fixture;

final class WithStrictParameter
{
    public function run()
    {
        $isIt = in_array($value, ['test'], true);
        $isNotIt = ! in_array($value, ['test'], true);
        $isItLoose = in_array($value, ['test'], false);
        $isNotItLoose = ! in_array($value, ['test'], false);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SingleInArrayToCompareRector\Fixture;

final class WithStrictParameter
{
    public function run()
    {
        $isIt = $value === 'test';
        $isNotIt = $value !== 'test';
        $isItLoose = $value == 'test';
        $isNotItLoose = $value != 'test';
    }
}

?>
