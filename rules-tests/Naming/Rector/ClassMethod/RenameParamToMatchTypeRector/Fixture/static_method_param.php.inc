<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Source\EliteManager;

class StaticMethodParam
{
    public static function create(EliteManager $manager): self
    {
        $instance = new self();
        return $instance;
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

use Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Source\EliteManager;

class StaticMethodParam
{
    public static function create(EliteManager $eliteManager): self
    {
        $instance = new self();
        return $instance;
    }
}

?>
