<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Source\DreamSearch;
use stdClass;

final class MultipleDifferentTypes
{
    public function run()
    {
        $search = new DreamSearch();
        $obj = new stdClass();
        return $search;
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Source\DreamSearch;
use stdClass;

final class MultipleDifferentTypes
{
    public function run()
    {
        $dreamSearch = new DreamSearch();
        $obj = new stdClass();
        return $dreamSearch;
    }
}

?>
