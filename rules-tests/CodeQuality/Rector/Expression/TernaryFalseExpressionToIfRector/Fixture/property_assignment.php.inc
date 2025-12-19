<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\TernaryFalseExpressionToIfRector\Fixture;

class PropertyAssignment
{
    private $value;

    public function run($condition)
    {
        $condition ? $this->value = 5 : false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\TernaryFalseExpressionToIfRector\Fixture;

class PropertyAssignment
{
    private $value;

    public function run($condition)
    {
        if ($condition) {
            $this->value = 5;
        }
    }
}

?>
