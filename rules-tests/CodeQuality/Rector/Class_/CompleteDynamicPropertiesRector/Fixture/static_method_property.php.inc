<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\CompleteDynamicPropertiesRector\Fixture;

class StaticMethodProperty
{
    public static function create()
    {
        $instance = new self();
        $instance->value = 5;
        return $instance;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\CompleteDynamicPropertiesRector\Fixture;

class StaticMethodProperty
{
    /**
     * @var int
     */
    public $value;
    public static function create()
    {
        $instance = new self();
        $instance->value = 5;
        return $instance;
    }
}

?>
