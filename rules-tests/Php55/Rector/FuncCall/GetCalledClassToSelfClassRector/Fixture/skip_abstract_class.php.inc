<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

abstract class SkipAbstractClass
{
    public function getName(): string
    {
        return get_called_class();
    }
}
