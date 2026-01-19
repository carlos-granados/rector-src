<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

class InStaticMethod
{
    public static function run()
    {
        $items = '';
        $items[] = 'first';
        $items[] = 'second';
        return $items;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\Assign\AssignArrayToStringRector\Fixture;

class InStaticMethod
{
    public static function run()
    {
        $items = [];
        $items[] = 'first';
        $items[] = 'second';
        return $items;
    }
}

?>
