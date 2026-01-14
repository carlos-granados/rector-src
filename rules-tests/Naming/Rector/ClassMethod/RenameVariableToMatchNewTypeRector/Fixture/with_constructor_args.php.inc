<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Source\DreamSearch;

final class WithConstructorArgs
{
    public function run(string $query)
    {
        $search = new DreamSearch($query);
        return $search;
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameVariableToMatchNewTypeRector\Source\DreamSearch;

final class WithConstructorArgs
{
    public function run(string $query)
    {
        $dreamSearch = new DreamSearch($query);
        return $dreamSearch;
    }
}

?>
