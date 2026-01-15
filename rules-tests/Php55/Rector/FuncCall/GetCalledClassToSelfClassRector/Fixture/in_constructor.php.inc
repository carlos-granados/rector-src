<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class InConstructor
{
    private string $className;

    public function __construct()
    {
        $this->className = get_called_class();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class InConstructor
{
    private string $className;

    public function __construct()
    {
        $this->className = self::class;
    }
}

?>
