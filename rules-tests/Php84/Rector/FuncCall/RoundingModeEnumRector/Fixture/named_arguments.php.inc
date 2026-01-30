<?php

namespace Rector\Tests\Php84\Rector\FuncCall\RoundingModeEnumRector;

round(1.5, mode: PHP_ROUND_HALF_UP);
round(num: 1.5, precision: 0, mode: PHP_ROUND_HALF_DOWN);
round(mode: PHP_ROUND_HALF_EVEN, num: 1.5, precision: 0);

?>
-----
<?php

namespace Rector\Tests\Php84\Rector\FuncCall\RoundingModeEnumRector;

round(1.5, mode: \RoundingMode::HalfAwayFromZero);
round(num: 1.5, precision: 0, mode: \RoundingMode::HalfTowardsZero);
round(mode: \RoundingMode::HalfEven, num: 1.5, precision: 0);

?>
