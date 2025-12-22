<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\UnwrapSprintfOneArgumentRector\Fixture;

class WithStringLiteral
{
    public function run()
    {
        echo sprintf('hello');
        $result = sprintf('world');
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\UnwrapSprintfOneArgumentRector\Fixture;

class WithStringLiteral
{
    public function run()
    {
        echo 'hello';
        $result = 'world';
    }
}

?>
