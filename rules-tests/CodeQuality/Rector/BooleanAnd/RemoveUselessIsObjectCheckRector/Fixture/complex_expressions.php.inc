<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RemoveUselessIsObjectCheckRector\Fixture;

final class ComplexExpressions
{
    public function run($obj)
    {
        return is_object($obj->prop) && $obj->prop instanceof \DateTime;
    }

    public function runArray($arr)
    {
        return is_object($arr['key']) && $arr['key'] instanceof \DateTime;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RemoveUselessIsObjectCheckRector\Fixture;

final class ComplexExpressions
{
    public function run($obj)
    {
        return $obj->prop instanceof \DateTime;
    }

    public function runArray($arr)
    {
        return $arr['key'] instanceof \DateTime;
    }
}

?>
