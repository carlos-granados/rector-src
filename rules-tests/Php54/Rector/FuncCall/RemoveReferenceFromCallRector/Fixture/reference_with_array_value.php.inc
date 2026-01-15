<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ReferenceWithArrayValue
{
    public function run(array $items)
    {
        return array_walk(&$items, function ($item) {
            return $item;
        });
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ReferenceWithArrayValue
{
    public function run(array $items)
    {
        return array_walk($items, function ($item) {
            return $item;
        });
    }
}

?>
