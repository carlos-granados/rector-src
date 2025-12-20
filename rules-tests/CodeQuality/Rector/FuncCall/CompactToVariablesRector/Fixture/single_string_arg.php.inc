<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CompactToVariablesRector\Fixture;

final class SingleStringArg
{
    public function run()
    {
        $name = 'John';

        return compact('name');
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CompactToVariablesRector\Fixture;

final class SingleStringArg
{
    public function run()
    {
        $name = 'John';

        return ['name' => $name];
    }
}

?>
