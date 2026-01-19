<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

class InClassMethod
{
    private $default = 'fallback';

    public function getValue($input)
    {
        return $input === null ? $this->default : $input;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

class InClassMethod
{
    private $default = 'fallback';

    public function getValue($input)
    {
        return $input ?? $this->default;
    }
}

?>
