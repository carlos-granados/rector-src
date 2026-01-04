<?php

namespace Rector\Tests\CodingStyle\Rector\Stmt\NewlineAfterStatementRector\Fixture;

enum Status
{
    case PENDING;
    case APPROVED;
    case REJECTED;

    public function isActive(): bool
    {
        if ($this === self::APPROVED) {
            return true;
        }
        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Stmt\NewlineAfterStatementRector\Fixture;

enum Status
{
    case PENDING;
    case APPROVED;
    case REJECTED;

    public function isActive(): bool
    {
        if ($this === self::APPROVED) {
            return true;
        }

        return false;
    }
}

?>
