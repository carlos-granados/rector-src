<?php

namespace Rector\Tests\Php74\Rector\FuncCall\ArrayKeyExistsOnPropertyRector\Fixture;

class SkipNamedArguments
{
    public $value;
}

$obj = new SkipNamedArguments();
array_key_exists(key: 'value', array: $obj);
array_key_exists(array: $obj, key: 'value');
