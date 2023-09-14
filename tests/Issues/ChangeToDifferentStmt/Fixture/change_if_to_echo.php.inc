<?php

namespace Rector\Core\Tests\Issues\ChangeToDifferentStmt\Fixture;

final class ChangeIfToEcho
{
    public function run()
    {
        if (rand(0,1)) {
        }
    }
}

?>
-----
<?php

namespace Rector\Core\Tests\Issues\ChangeToDifferentStmt\Fixture;

final class ChangeIfToEcho
{
    public function run()
    {
        echo 'test';
    }
}

?>