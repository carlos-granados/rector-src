<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

class MethodCallCondition
{
    public function run()
    {
        $value = $this->getValue() ? $this->getValue() : 'default';
    }

    public function getValue(): ?string
    {
        return 'test';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

class MethodCallCondition
{
    public function run()
    {
        $value = $this->getValue() ?: 'default';
    }

    public function getValue(): ?string
    {
        return 'test';
    }
}

?>
