<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\InlineIfToExplicitIfRector\Fixture;

class PropertyAssignment
{
    private $value;

    public function run()
    {
        is_null($this->value) && $this->value = 5;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\InlineIfToExplicitIfRector\Fixture;

class PropertyAssignment
{
    private $value;

    public function run()
    {
        if (is_null($this->value)) {
            $this->value = 5;
        }
    }
}

?>
