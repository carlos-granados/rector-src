<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Source\DreamSearch;

final class VariableUsedInClosure
{
    public function run()
    {
        $search = new DreamSearch();
        $callback = function () use ($search) {
            return $search->reachIt();
        };
        return $callback;
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Source\DreamSearch;

final class VariableUsedInClosure
{
    public function run()
    {
        $dreamSearch = new DreamSearch();
        $callback = function () use ($dreamSearch) {
            return $dreamSearch->reachIt();
        };
        return $callback;
    }
}

?>
