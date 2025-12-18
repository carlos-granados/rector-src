<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\InlineArrayReturnAssignRector\Fixture;

final class ArrowFunction
{
    public function run()
    {
        $callback = fn() => (function() {
            $items = [];
            $items['name'] = 'Timmy';
            $items['surname'] = 'Back';

            return $items;
        })();

        return $callback();
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\InlineArrayReturnAssignRector\Fixture;

final class ArrowFunction
{
    public function run()
    {
        $callback = fn() => (function () {
            return ['name' => 'Timmy', 'surname' => 'Back'];
        })();

        return $callback();
    }
}

?>
