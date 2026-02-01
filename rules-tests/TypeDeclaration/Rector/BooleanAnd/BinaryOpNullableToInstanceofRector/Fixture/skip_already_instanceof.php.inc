<?php

namespace Rector\Tests\TypeDeclaration\Rector\BooleanAnd\BinaryOpNullableToInstanceofRector\Fixture;

use Rector\Tests\TypeDeclaration\Rector\BooleanAnd\BinaryOpNullableToInstanceofRector\Source\SomeInstance;

function skipAlreadyInstanceof(?SomeInstance $someClass)
{
    if ($someClass instanceof SomeInstance && $someClass->someMethod()) {
        return 'yes';
    }

    return 'no';
}
