<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

enum InEnum: string
{
    case ONE = 'one';

    public function getName(): string
    {
        return get_called_class();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

enum InEnum: string
{
    case ONE = 'one';

    public function getName(): string
    {
        return self::class;
    }
}

?>
