<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final readonly class FinalReadonlyClass
{
    public function run()
    {
        return get_called_class();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final readonly class FinalReadonlyClass
{
    public function run()
    {
        return self::class;
    }
}

?>
