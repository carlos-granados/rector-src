<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedPrivateMethodRector\Fixture;

use Attribute;

#[Attribute]
class RouteAttribute
{
    public function __construct(public array $callback)
    {
    }
}

final class SkipMethodUsedInAttribute
{
    #[RouteAttribute(callback: [self::class, 'handleRequest'])]
    public function index()
    {
        return 'index';
    }

    private static function handleRequest()
    {
        return 'handled';
    }
}

?>
