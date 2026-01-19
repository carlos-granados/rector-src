<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class WithNestedArrayAccess
{
    private $data = [];

    public function resolve($category, $key)
    {
        if (isset($this->data[$category][$key])) {
            return $this->data[$category][$key];
        }

        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class WithNestedArrayAccess
{
    private $data = [];

    public function resolve($category, $key)
    {
        return $this->data[$category][$key] ?? null;
    }
}

?>
