<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\NestedTernaryToMatchRector\Fixture;

final class MixedComparisonTypes
{
    public function run($value, $flag)
    {
        $result = $value > 100 ? 'greater' : ($flag ? 'flag true' : 'flag false');
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\NestedTernaryToMatchRector\Fixture;

final class MixedComparisonTypes
{
    public function run($value, $flag)
    {
        $result = match (true) {
            $value > 100 => 'greater',
            $flag => 'flag true',
            default => 'flag false',
        };
    }
}

?>
