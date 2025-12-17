<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceMultipleBooleanNotRector\Fixture;

class IfCondition
{
    public function run($condition)
    {
        if (!!$condition) {
            return true;
        }
        
        if (!!!$condition) {
            return false;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceMultipleBooleanNotRector\Fixture;

class IfCondition
{
    public function run($condition)
    {
        if ((bool) $condition) {
            return true;
        }
        
        if (!$condition) {
            return false;
        }
    }
}

?>
