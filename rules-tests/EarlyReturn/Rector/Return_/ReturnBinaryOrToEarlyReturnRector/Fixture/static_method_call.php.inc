<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class StaticMethodCall
{
    public function accept()
    {
        return self::something() || self::somethingElse();
    }

    private static function something(): bool
    {
        return true;
    }

    private static function somethingElse(): bool
    {
        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\Return_\ReturnBinaryOrToEarlyReturnRector\Fixture;

class StaticMethodCall
{
    public function accept()
    {
        if (self::something()) {
            return true;
        }
        return self::somethingElse();
    }

    private static function something(): bool
    {
        return true;
    }

    private static function somethingElse(): bool
    {
        return false;
    }
}

?>
