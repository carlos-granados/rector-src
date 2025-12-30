<?php

namespace Rector\Tests\CodingStyle\Rector\Enum_\EnumCaseToPascalCaseRector\Fixture;

enum EnumWithNumbers
{
    case STATUS_1;
    case status_2;
    case STATE3;
    case state_4_test;
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Enum_\EnumCaseToPascalCaseRector\Fixture;

enum EnumWithNumbers
{
    case Status1;
    case Status2;
    case State3;
    case State4Test;
}

?>
