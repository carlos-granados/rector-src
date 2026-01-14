<?php

namespace Rector\Tests\NetteUtils\Rector\StaticCall\UtilsJsonStaticCallNamedArgRector\Fixture;

final class SkipDifferentClass
{
    public function run($data)
    {
        $encodedJson = SomeOtherJson::encode($data, true);
    }
}

class SomeOtherJson
{
    public static function encode($data, $pretty): string
    {
        return '';
    }
}

