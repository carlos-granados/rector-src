<?php

namespace Rector\Tests\Unambiguous\Rector\Expression\FluentSettersToStandaloneCallMethodRector\Fixture;

use Rector\Tests\Unambiguous\Rector\Expression\FluentSettersToStandaloneCallMethodRector\Source\SomeSetterClass;

final class ExpressionWithoutReturn
{
    public function setup()
    {
        (new SomeSetterClass())
            ->setName('John')
            ->setSurname('Doe');
    }
}

?>
-----
<?php

namespace Rector\Tests\Unambiguous\Rector\Expression\FluentSettersToStandaloneCallMethodRector\Fixture;

use Rector\Tests\Unambiguous\Rector\Expression\FluentSettersToStandaloneCallMethodRector\Source\SomeSetterClass;

final class ExpressionWithoutReturn
{
    public function setup()
    {
        $someSetterClass = new SomeSetterClass();
        $someSetterClass->setName('John');
        $someSetterClass->setSurname('Doe');
    }
}

?>
