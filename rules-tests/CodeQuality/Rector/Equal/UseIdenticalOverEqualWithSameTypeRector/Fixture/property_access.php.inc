<?php

namespace Rector\Tests\CodeQuality\Rector\Equal\UseIdenticalOverEqualWithSameTypeRector\Fixture;

class PropertyAccess
{
    private int $value = 5;

    public function run(int $input)
    {
        if ($this->value == $input) {
            return true;
        }

        if ($input != $this->value) {
            return false;
        }

        return true;
    }
}

-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Equal\UseIdenticalOverEqualWithSameTypeRector\Fixture;

class PropertyAccess
{
    private int $value = 5;

    public function run(int $input)
    {
        if ($this->value === $input) {
            return true;
        }

        if ($input !== $this->value) {
            return false;
        }

        return true;
    }
}
