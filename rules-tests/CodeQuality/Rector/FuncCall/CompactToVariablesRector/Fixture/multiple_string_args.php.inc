<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CompactToVariablesRector\Fixture;

final class MultipleStringArgs
{
    public function run()
    {
        $name = 'John';
        $email = 'john@example.com';
        $age = 30;

        return compact('name', 'email', 'age');
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\CompactToVariablesRector\Fixture;

final class MultipleStringArgs
{
    public function run()
    {
        $name = 'John';
        $email = 'john@example.com';
        $age = 30;

        return ['name' => $name, 'email' => $email, 'age' => $age];
    }
}

?>
