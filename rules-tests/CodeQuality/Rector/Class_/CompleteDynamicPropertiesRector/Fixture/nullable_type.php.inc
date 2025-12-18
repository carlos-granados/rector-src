<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\CompleteDynamicPropertiesRector\Fixture;

class NullableType
{
    public function set()
    {
        $this->value = null;
    }

    public function setValue()
    {
        $this->value = 'string';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\CompleteDynamicPropertiesRector\Fixture;

class NullableType
{
    /**
     * @var string|null
     */
    public $value;
    public function set()
    {
        $this->value = null;
    }

    public function setValue()
    {
        $this->value = 'string';
    }
}

?>
