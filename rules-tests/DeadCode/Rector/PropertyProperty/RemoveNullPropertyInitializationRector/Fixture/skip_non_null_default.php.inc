<?php

namespace Rector\Tests\DeadCode\Rector\PropertyProperty\RemoveNullPropertyInitializationRector\Fixture;

class SkipNonNullDefault
{
    private $count = 0;
    private $name = '';
    private $items = [];
    private $enabled = false;
}
