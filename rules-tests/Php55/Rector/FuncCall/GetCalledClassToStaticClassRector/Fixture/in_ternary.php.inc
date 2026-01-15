<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class InTernary
{
    public function run(bool $condition)
    {
        return $condition ? get_called_class() : 'default';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class InTernary
{
    public function run(bool $condition)
    {
        return $condition ? static::class : 'default';
    }
}

?>
