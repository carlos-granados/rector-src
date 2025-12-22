<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\SimplifyBoolIdenticalTrueRector\Fixture;

final class ChainedComparison
{
    public function run(bool $value)
    {
        // Chained comparisons
        $result = ($value === true) === true;
        $result = ($value !== false) !== false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\SimplifyBoolIdenticalTrueRector\Fixture;

final class ChainedComparison
{
    public function run(bool $value)
    {
        // Chained comparisons
        $result = $value;
        $result = $value;
    }
}

?>
