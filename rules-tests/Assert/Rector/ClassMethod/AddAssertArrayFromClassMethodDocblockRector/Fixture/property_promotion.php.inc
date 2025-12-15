<?php

namespace Rector\Tests\Assert\Rector\ClassMethod\AddAssertArrayFromClassMethodDocblockRector\Fixture;

final class PropertyPromotion
{
    /**
     * @param int[] $items
     */
    public function __construct(private array $items)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Assert\Rector\ClassMethod\AddAssertArrayFromClassMethodDocblockRector\Fixture;

final class PropertyPromotion
{
    /**
     * @param int[] $items
     */
    public function __construct(private array $items)
    {
        \Webmozart\Assert\Assert::allInteger($items);
    }
}

?>
