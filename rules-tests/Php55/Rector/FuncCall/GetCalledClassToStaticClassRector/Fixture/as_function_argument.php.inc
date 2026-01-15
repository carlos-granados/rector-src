<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class AsFunctionArgument
{
    public function run()
    {
        return strlen(get_called_class());
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class AsFunctionArgument
{
    public function run()
    {
        return strlen(static::class);
    }
}

?>
