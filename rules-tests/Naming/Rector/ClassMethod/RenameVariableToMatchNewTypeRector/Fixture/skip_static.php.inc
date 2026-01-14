<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

final class SkipStatic
{
    public function run()
    {
        $instance = new static();
        return $instance;
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

final class SkipStatic
{
    public function run()
    {
        $static = new static();
        return $static;
    }
}

?>
