<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\NestedTernaryToMatchRector\Fixture;

final class NestedWithMethodCalls
{
    public function run($obj)
    {
        $result = $obj->getValue() > 100 ? 'high' : ($obj->getValue() < 10 ? 'low' : 'medium');
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\NestedTernaryToMatchRector\Fixture;

final class NestedWithMethodCalls
{
    public function run($obj)
    {
        $result = match (true) {
            $obj->getValue() > 100 => 'high',
            $obj->getValue() < 10 => 'low',
            default => 'medium',
        };
    }
}

?>
