<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class InTernary
{
    public function run(bool $condition)
    {
        return $condition ? get_called_class() : 'default';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class InTernary
{
    public function run(bool $condition)
    {
        return $condition ? self::class : 'default';
    }
}

?>
