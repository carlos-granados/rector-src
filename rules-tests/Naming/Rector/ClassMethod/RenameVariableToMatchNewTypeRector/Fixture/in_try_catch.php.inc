<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Source\DreamSearch;

final class InTryCatch
{
    public function run()
    {
        try {
            $search = new DreamSearch();
            $search->reachIt();
        } catch (\Exception $e) {
            // handle
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Source\DreamSearch;

final class InTryCatch
{
    public function run()
    {
        try {
            $dreamSearch = new DreamSearch();
            $dreamSearch->reachIt();
        } catch (\Exception $e) {
            // handle
        }
    }
}

?>
