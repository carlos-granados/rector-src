<?php

namespace Rector\Tests\DeadCode\Rector\PropertyProperty\RemoveNullPropertyInitializationRector\Fixture;

class SkipTypedProperty
{
    private ?string $name = null;
}
