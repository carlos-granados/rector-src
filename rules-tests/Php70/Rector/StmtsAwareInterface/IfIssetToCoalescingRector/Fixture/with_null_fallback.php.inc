<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class WithNullFallback
{
    private $config = [];

    public function get($key)
    {
        if (isset($this->config[$key])) {
            return $this->config[$key];
        }

        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class WithNullFallback
{
    private $config = [];

    public function get($key)
    {
        return $this->config[$key] ?? null;
    }
}

?>
