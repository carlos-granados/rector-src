<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ReferenceSelfStaticCall
{
    public function run($value)
    {
        return self::process(&$value);
    }

    public static function process($val)
    {
        return $val;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ReferenceSelfStaticCall
{
    public function run($value)
    {
        return self::process($value);
    }

    public static function process($val)
    {
        return $val;
    }
}

?>
