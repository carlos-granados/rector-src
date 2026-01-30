<?php

declare(strict_types=1);

namespace Rector\Tests\Transform\Rector\Class_\AddInterfaceByTraitRector\Source;

class ParentWithTraitAndInterface implements SomeInterface
{
    use SomeTrait;
}
