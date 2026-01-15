<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ReferenceInMatch
{
    public function run($value, int $type)
    {
        return match ($type) {
            1 => strlen(&$value),
            2 => substr(&$value, 0, 5),
            default => $value,
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php54\Rector\FuncCall\RemoveReferenceFromCallRector\Fixture;

class ReferenceInMatch
{
    public function run($value, int $type)
    {
        return match ($type) {
            1 => strlen($value),
            2 => substr($value, 0, 5),
            default => $value,
        };
    }
}

?>
