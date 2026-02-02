<?php

namespace Rector\Tests\TypeDeclarationDocblocks\Rector\Class_\AddVarArrayDocblockFromDimFetchAssignRector\Fixture;

final class SkipStaticProperty
{
    private static array $items = [];

    public static function addItem()
    {
        self::$items[] = 'item';
    }
}
