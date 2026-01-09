<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\MethodCall\RemoveNullArgOnNullDefaultParamRector\Fixture;

function allNullDefaultsFunc(?int $a = null, ?string $b = null, ?float $c = null)
{
}

allNullDefaultsFunc(null, null, null);

?>
-----
<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\MethodCall\RemoveNullArgOnNullDefaultParamRector\Fixture;

function allNullDefaultsFunc(?int $a = null, ?string $b = null, ?float $c = null)
{
}

allNullDefaultsFunc();

?>
