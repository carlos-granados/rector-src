<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Fixture;

use Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Source\SomeType;

final class Negation
{
    public function run(object $object)
    {
        return !is_a($object, SomeType::class);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Fixture;

use Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Source\SomeType;

final class Negation
{
    public function run(object $object)
    {
        return !$object instanceof \Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Source\SomeType;
    }
}

?>
