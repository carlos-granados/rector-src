<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class InClosure
{
    public function run()
    {
        return function ($items, $key) {
            if (isset($items[$key])) {
                return $items[$key];
            }

            return 'default';
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class InClosure
{
    public function run()
    {
        return function ($items, $key) {
            return $items[$key] ?? 'default';
        };
    }
}

?>
