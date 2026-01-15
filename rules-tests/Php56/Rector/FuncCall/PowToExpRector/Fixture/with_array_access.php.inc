<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function withArrayAccess(array $values)
{
    return pow($values[0], $values[1]);
}

?>
-----
<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function withArrayAccess(array $values)
{
    return $values[0] ** $values[1];
}

?>
