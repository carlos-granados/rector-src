<?php

namespace Rector\Tests\CodeQuality\Rector\NullsafeMethodCall\CleanupUnneededNullsafeOperatorRector\Fixture;

class StaticCallExample
{
    public static function getInstance(): self
    {
        return new self();
    }

    public function getName(): string
    {
        return 'name';
    }
}

echo StaticCallExample::getInstance()?->getName();

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\NullsafeMethodCall\CleanupUnneededNullsafeOperatorRector\Fixture;

class StaticCallExample
{
    public static function getInstance(): self
    {
        return new self();
    }

    public function getName(): string
    {
        return 'name';
    }
}

echo StaticCallExample::getInstance()->getName();

?>
