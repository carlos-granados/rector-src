<?php

namespace Rector\Tests\DeadCode\Rector\ClassLike\RemoveAnnotationRector\Fixture;

/**
 * @method getName()
 * @author John Doe
 * @deprecated
 */
final class MultipleAnnotationsPreserveOthers
{
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassLike\RemoveAnnotationRector\Fixture;

/**
 * @author John Doe
 * @deprecated
 */
final class MultipleAnnotationsPreserveOthers
{
}

?>
