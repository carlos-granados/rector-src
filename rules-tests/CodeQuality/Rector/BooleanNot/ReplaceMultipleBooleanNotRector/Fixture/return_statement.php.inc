<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceMultipleBooleanNotRector\Fixture;

class ReturnStatement
{
    public function toBool($value)
    {
        return !!$value;
    }

    public function toNegated($value)
    {
        return !!!$value;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceMultipleBooleanNotRector\Fixture;

class ReturnStatement
{
    public function toBool($value)
    {
        return (bool) $value;
    }

    public function toNegated($value)
    {
        return !$value;
    }
}

?>
