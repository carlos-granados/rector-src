<?php

namespace Rector\Tests\DeadCode\Rector\ClassLike\RemoveAnnotationRector\Fixture;

/**
 * @method getName()
 */
final class EmptyDocblockAfterRemoval
{
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassLike\RemoveAnnotationRector\Fixture;

final class EmptyDocblockAfterRemoval
{
}

?>
