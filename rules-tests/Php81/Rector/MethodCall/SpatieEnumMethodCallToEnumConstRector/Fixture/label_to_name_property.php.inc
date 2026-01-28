<?php

namespace Rector\Tests\Php81\Rector\MethodCall\SpatieEnumMethodCallToEnumConstRector\Fixture;

use Rector\Tests\Php81\Rector\MethodCall\SpatieEnumMethodCallToEnumConstRector\Source\StatusEnum;

final class LabelToNameProperty
{
    public function run()
    {
        $label = StatusEnum::archived()->label();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php81\Rector\MethodCall\SpatieEnumMethodCallToEnumConstRector\Fixture;

use Rector\Tests\Php81\Rector\MethodCall\SpatieEnumMethodCallToEnumConstRector\Source\StatusEnum;

final class LabelToNameProperty
{
    public function run()
    {
        $label = \Rector\Tests\Php81\Rector\MethodCall\SpatieEnumMethodCallToEnumConstRector\Source\StatusEnum::ARCHIVED->name;
    }
}

?>
