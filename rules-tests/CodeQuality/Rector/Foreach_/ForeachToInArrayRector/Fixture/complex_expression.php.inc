<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\ForeachToInArrayRector\Fixture;

final class ComplexExpression
{
    public function run(array $items): bool
    {
        foreach ($items as $item) {
            if ($item->getId() === 'something') {
                return true;
            }
        }

        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\ForeachToInArrayRector\Fixture;

final class ComplexExpression
{
    public function run(array $items): bool
    {
        foreach ($items as $item) {
            if ($item->getId() === 'something') {
                return true;
            }
        }

        return false;
    }
}

?>
