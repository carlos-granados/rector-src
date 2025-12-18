<?php

namespace Rector\Tests\CodeQuality\Rector\Empty_\SimplifyEmptyCheckOnEmptyArrayRector\Fixture;

final class TernaryOperator
{
    public function run(array $values)
    {
        return empty($values) ? 'empty' : 'not empty';
    }

    public function runNot(array $values)
    {
        return !empty($values) ? 'not empty' : 'empty';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Empty_\SimplifyEmptyCheckOnEmptyArrayRector\Fixture;

final class TernaryOperator
{
    public function run(array $values)
    {
        return $values === [] ? 'empty' : 'not empty';
    }

    public function runNot(array $values)
    {
        return $values !== [] ? 'not empty' : 'empty';
    }
}

?>
