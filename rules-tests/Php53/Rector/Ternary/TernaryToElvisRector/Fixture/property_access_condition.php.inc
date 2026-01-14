<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

class PropertyAccessCondition
{
    public ?string $name;

    public function run()
    {
        $value = $this->name ? $this->name : 'anonymous';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

class PropertyAccessCondition
{
    public ?string $name;

    public function run()
    {
        $value = $this->name ?: 'anonymous';
    }
}

?>
