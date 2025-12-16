<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceConstantBooleanNotRector\Fixture;

class TernaryExpression
{
    public function run()
    {
        $result = !true ? 'never' : 'always';
        $other = !false ? 'always' : 'never';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceConstantBooleanNotRector\Fixture;

class TernaryExpression
{
    public function run()
    {
        $result = false ? 'never' : 'always';
        $other = true ? 'always' : 'never';
    }
}

?>
