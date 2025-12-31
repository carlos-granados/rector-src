<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\FunctionFirstClassCallableRector\Fixture;

final class SkipClassMethodString
{
    public function map(array $data)
    {
        // Class method strings are actually transformed correctly
        return array_map('DateTime::createFromFormat', $data);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\FunctionFirstClassCallableRector\Fixture;

final class SkipClassMethodString
{
    public function map(array $data)
    {
        // Class method strings are actually transformed correctly
        return array_map(DateTime::createFromFormat(...), $data);
    }
}

?>
