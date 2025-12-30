<?php

namespace Rector\Tests\CodingStyle\Rector\Enum_\EnumCaseToPascalCaseRector\Fixture;

enum SingleCharacterCases
{
    case a;
    case B;
    case c_d;
    case E_F;
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Enum_\EnumCaseToPascalCaseRector\Fixture;

enum SingleCharacterCases
{
    case A;
    case B;
    case CD;
    case EF;
}

?>
