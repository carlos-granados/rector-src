<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class BooleanProperty
{
    private bool $isActive = true;

    public function go($condition)
    {
        return $condition ? $this->isActive : false;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class BooleanProperty
{
    private bool $isActive = true;

    public function go($condition)
    {
        return $condition && $this->isActive;
    }
}

?>
