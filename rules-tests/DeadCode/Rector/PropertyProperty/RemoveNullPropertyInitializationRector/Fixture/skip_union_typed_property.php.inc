<?php

namespace Rector\Tests\DeadCode\Rector\PropertyProperty\RemoveNullPropertyInitializationRector\Fixture;

class SkipUnionTypedProperty
{
    private string|null $name = null;
}
