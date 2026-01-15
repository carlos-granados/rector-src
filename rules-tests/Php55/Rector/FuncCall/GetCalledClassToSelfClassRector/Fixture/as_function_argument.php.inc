<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class AsFunctionArgument
{
    public function run()
    {
        return strlen(get_called_class());
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class AsFunctionArgument
{
    public function run()
    {
        return strlen(self::class);
    }
}

?>
