<?php

namespace Rector\Tests\CodingStyle\Rector\Enum_\EnumCaseToPascalCaseRector\Fixture;

enum MixedCaseVariants
{
    case ALL_CAPS;
    case lowercase;
    case MixedCase;
    case camelCase;
    case snake_case;
    case SCREAMING_SNAKE_CASE;
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Enum_\EnumCaseToPascalCaseRector\Fixture;

enum MixedCaseVariants
{
    case AllCaps;
    case Lowercase;
    case MixedCase;
    case CamelCase;
    case SnakeCase;
    case ScreamingSnakeCase;
}

?>
