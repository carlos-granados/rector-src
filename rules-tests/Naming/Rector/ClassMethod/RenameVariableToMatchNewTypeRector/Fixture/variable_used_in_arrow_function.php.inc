<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Source\DreamSearch;

final class VariableUsedInArrowFunction
{
    public function run()
    {
        $search = new DreamSearch();
        $callback = fn () => $search->reachIt();
        return $callback;
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Source\DreamSearch;

final class VariableUsedInArrowFunction
{
    public function run()
    {
        $dreamSearch = new DreamSearch();
        $callback = fn () => $dreamSearch->reachIt();
        return $callback;
    }
}

?>
