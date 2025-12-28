<?php

namespace Rector\Tests\CodeQuality\Rector\NullsafeMethodCall\CleanupUnneededNullsafeOperatorRector\Fixture;

class WithArguments
{
    public function process(string $name, int $age): string
    {
        return $name . ' ' . $age;
    }
}

function getWithArguments(): WithArguments
{
    return new WithArguments();
}

echo getWithArguments()?->process('John', 25);

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\NullsafeMethodCall\CleanupUnneededNullsafeOperatorRector\Fixture;

class WithArguments
{
    public function process(string $name, int $age): string
    {
        return $name . ' ' . $age;
    }
}

function getWithArguments(): WithArguments
{
    return new WithArguments();
}

echo getWithArguments()->process('John', 25);

?>
