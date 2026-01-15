<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class InMatch
{
    public function run(int $value)
    {
        return match ($value) {
            1 => get_called_class(),
            default => 'other',
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class InMatch
{
    public function run(int $value)
    {
        return match ($value) {
            1 => static::class,
            default => 'other',
        };
    }
}

?>
