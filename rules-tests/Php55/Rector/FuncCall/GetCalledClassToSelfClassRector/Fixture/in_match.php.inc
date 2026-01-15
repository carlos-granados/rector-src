<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class InMatch
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

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class InMatch
{
    public function run(int $value)
    {
        return match ($value) {
            1 => self::class,
            default => 'other',
        };
    }
}

?>
