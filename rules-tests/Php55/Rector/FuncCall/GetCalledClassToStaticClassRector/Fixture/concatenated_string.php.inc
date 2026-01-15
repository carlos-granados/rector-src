<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class ConcatenatedString
{
    public function run()
    {
        return 'Class: ' . get_called_class() . ' is loaded';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class ConcatenatedString
{
    public function run()
    {
        return 'Class: ' . static::class . ' is loaded';
    }
}

?>
