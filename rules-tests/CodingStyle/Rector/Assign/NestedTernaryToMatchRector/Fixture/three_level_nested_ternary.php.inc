<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\NestedTernaryToMatchRector\Fixture;

final class ThreeLevelNestedTernary
{
    public function run($value)
    {
        $result = $value > 100 ? 'greater than 100' : ($value > 50 ? 'greater than 50' : ($value > 10 ? 'greater than 10' : 'less or equal to 10'));
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\NestedTernaryToMatchRector\Fixture;

final class ThreeLevelNestedTernary
{
    public function run($value)
    {
        $result = match (true) {
            $value > 100 => 'greater than 100',
            $value > 50 => 'greater than 50',
            $value > 10 => 'greater than 10',
            default => 'less or equal to 10',
        };
    }
}

?>
