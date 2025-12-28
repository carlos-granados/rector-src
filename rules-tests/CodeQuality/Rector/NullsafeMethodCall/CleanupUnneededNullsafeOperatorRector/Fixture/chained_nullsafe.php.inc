<?php

namespace Rector\Tests\CodeQuality\Rector\NullsafeMethodCall\CleanupUnneededNullsafeOperatorRector\Fixture;

class ChainedNullsafe
{
    public function getParent(): self
    {
        return $this;
    }

    public function getName(): string
    {
        return 'name';
    }
}

function getChained(): ChainedNullsafe
{
    return new ChainedNullsafe();
}

echo getChained()?->getParent()?->getName();

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\NullsafeMethodCall\CleanupUnneededNullsafeOperatorRector\Fixture;

class ChainedNullsafe
{
    public function getParent(): self
    {
        return $this;
    }

    public function getName(): string
    {
        return 'name';
    }
}

function getChained(): ChainedNullsafe
{
    return new ChainedNullsafe();
}

echo getChained()->getParent()->getName();

?>
