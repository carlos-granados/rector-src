<?php

namespace Rector\Tests\CodeQuality\Rector\For_\ForRepeatedCountToOwnVariableRector\Fixture;

class SmallerComparison
{
    public function run($items)
    {
        for ($i = 0; $i < count($items); $i++) {
            echo $items[$i];
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\For_\ForRepeatedCountToOwnVariableRector\Fixture;

class SmallerComparison
{
    public function run($items)
    {
        $counter = count($items);
        for ($i = 0; $i < $counter; $i++) {
            echo $items[$i];
        }
    }
}

?>
