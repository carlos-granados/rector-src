<?php

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class MultipleOccurrences
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

namespace Rector\Tests\Php55\Rector\FuncCall\GetCalledClassToSelfClassRector\Fixture;

final class MultipleOccurrences
{
    public function run()
    {
        $first = self::class;
        $second = self::class;
        return $first . $second;
    }
}

?>
