<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

class WithRandomInMethod
{
    public function getRandomNumber(): int
    {
        return rand(1, 100);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

class WithRandomInMethod
{
    public function getRandomNumber(): int
    {
        return random_int(1, 100);
    }
}

?>
