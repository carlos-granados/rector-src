<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SingleInArrayToCompareRector\Fixture;

final class NegatedWithStrict
{
    public function run()
    {
        if (! in_array($value, ['test'], true)) {
            return 'not found';
        }
        
        if (! in_array($value, ['test'], false)) {
            return 'not found loose';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SingleInArrayToCompareRector\Fixture;

final class NegatedWithStrict
{
    public function run()
    {
        if ($value !== 'test') {
            return 'not found';
        }
        
        if ($value != 'test') {
            return 'not found loose';
        }
    }
}

?>
