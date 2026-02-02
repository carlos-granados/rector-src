<?php

namespace Rector\Tests\Unambiguous\Rector\Expression\FluentSettersToStandaloneCallMethodRector\Fixture;

use Rector\Tests\Unambiguous\Rector\Expression\FluentSettersToStandaloneCallMethodRector\Source\SomeSetterClass;

final class SkipExistingVariable
{
    public function setup()
    {
        $setter = new SomeSetterClass();
        return $setter
            ->setName('John')
            ->setSurname('Doe');
    }
}
