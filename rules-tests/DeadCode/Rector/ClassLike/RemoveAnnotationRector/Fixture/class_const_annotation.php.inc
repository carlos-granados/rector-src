<?php

namespace Rector\Tests\DeadCode\Rector\ClassLike\RemoveAnnotationRector\Fixture;

final class ClassConstAnnotation
{
    /**
     * @method getName()
     * @var string
     */
    private const STATUS = 'active';
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassLike\RemoveAnnotationRector\Fixture;

final class ClassConstAnnotation
{
    /**
     * @var string
     */
    private const STATUS = 'active';
}

?>
