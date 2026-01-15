<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class InConstructor
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

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class InConstructor
{
    private string $className;

    public function __construct()
    {
        $this->className = static::class;
    }
}

?>
