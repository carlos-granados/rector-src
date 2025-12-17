<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceMultipleBooleanNotRector\Fixture;

class PropertyAccess
{
    private $property;
    
    public function run($obj)
    {
        $result1 = !!$this->property;
        $result2 = !!$obj->property;
        $result3 = !!!$obj->nested->property;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceMultipleBooleanNotRector\Fixture;

class PropertyAccess
{
    private $property;
    
    public function run($obj)
    {
        $result1 = (bool) $this->property;
        $result2 = (bool) $obj->property;
        $result3 = !$obj->nested->property;
    }
}

?>
