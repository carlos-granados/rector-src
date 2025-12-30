<?php

namespace Rector\Tests\CodingStyle\Rector\ClassConst\RemoveFinalFromConstRector\Fixture;

class SkipNonFinalClassWithFinalConst
{
    final public const NAME = 'value';
}
