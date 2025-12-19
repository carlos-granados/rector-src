<?php

namespace Rector\Tests\CodeQuality\Rector\For_\ForRepeatedCountToOwnVariableRector\Fixture;

class NestedForLoops
{
    public function run($items, $otherItems)
    {
        for ($i = 0; $i < count($items); $i++) {
            for ($j = 0; $j < count($otherItems); $j++) {
                echo $items[$i] . $otherItems[$j];
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\For_\ForRepeatedCountToOwnVariableRector\Fixture;

class NestedForLoops
{
    public function run($items, $otherItems)
    {
        $counter = count($items);
        for ($i = 0; $i < $counter; $i++) {
            for ($j = 0; $j < count($otherItems); $j++) {
                echo $items[$i] . $otherItems[$j];
            }
        }
    }
}

?>
