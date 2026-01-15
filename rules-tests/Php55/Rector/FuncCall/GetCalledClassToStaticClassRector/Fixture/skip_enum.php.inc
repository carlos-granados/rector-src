<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

enum SkipEnum: string
{
    case ONE = 'one';

    public function getName(): string
    {
        return get_called_class();
    }
}
