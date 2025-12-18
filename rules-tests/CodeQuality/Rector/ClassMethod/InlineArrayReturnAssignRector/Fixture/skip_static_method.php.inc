<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\InlineArrayReturnAssignRector\Fixture;

final class SkipStaticMethod
{
    public static function getData()
    {
        $items = [];
        $items['name'] = 'Timmy';
        $items['surname'] = 'Back';

        return $items;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\InlineArrayReturnAssignRector\Fixture;

final class SkipStaticMethod
{
    public static function getData()
    {
        return ['name' => 'Timmy', 'surname' => 'Back'];
    }
}

?>
