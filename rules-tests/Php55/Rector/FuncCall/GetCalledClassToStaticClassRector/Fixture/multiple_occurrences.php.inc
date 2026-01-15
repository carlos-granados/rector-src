<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class MultipleOccurrences
{
    public function run()
    {
        $first = get_called_class();
        $second = get_called_class();
        return $first . $second;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToStaticClassRector\Fixture;

class MultipleOccurrences
{
    public function run()
    {
        $first = static::class;
        $second = static::class;
        return $first . $second;
    }
}

?>
