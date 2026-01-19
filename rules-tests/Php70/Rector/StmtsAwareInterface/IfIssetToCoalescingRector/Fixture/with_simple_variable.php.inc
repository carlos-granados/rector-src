<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class WithSimpleVariable
{
    public function resolve($value)
    {
        if (isset($value)) {
            return $value;
        }

        return 'fallback';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class WithSimpleVariable
{
    public function resolve($value)
    {
        return $value ?? 'fallback';
    }
}

?>
